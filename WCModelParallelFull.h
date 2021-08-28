#include "stdafx.h"

namespace NSWCModelPF {

	template<class PGraph>
	int WCinfluenceSpreadParfull1(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull2(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull3(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull4(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull5(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull6(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull7(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull8(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull9(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull10(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull11(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull12(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull13(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull14(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull15(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull16(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}
	
	template<class PGraph>
	int WCinfluenceSpreadParfull17(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull18(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull19(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull20(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull21(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull22(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull23(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}

	template<class PGraph>
	int WCinfluenceSpreadParfull24(const PGraph& Graph, const vector<int> &seeds) {
		int affected = 0;
		queue<int> q;
		TIntBoolH Completed;
		for (PGraph::TObj::TNodeI NI = Graph->BegNI(); NI < Graph->EndNI(); NI++)
			Completed.AddDat(NI.GetId(), false);
		for (int i = 0; i < seeds.size(); i++)
		{
			q.push(seeds[i]);
			Completed.AddDat(seeds[i]) = true;
		}
		affected += seeds.size();
		while (!q.empty())
		{
			int curnode = q.front();
			q.pop();
			PGraph::TObj::TNodeI NI = Graph->GetNI(curnode);
			int neighbour;
			for (int e = 0; e < NI.GetOutDeg(); e++) {
				int neighbour = NI.GetOutNId(e);

				if (Completed.GetDat(neighbour))
					continue;

				/////////////////////////////////////////////////////
				PGraph::TObj::TNodeI NI2 = Graph->GetNI(neighbour);
				float EdgeProb = (float)1.0 / NI2.GetInDeg();
				////////////////////////////////////////////////////

				double gen = ((double)(1 + rand() % LIMIT)) / LIMIT;
				if (gen <= EdgeProb)
				{
					Completed.AddDat(neighbour) = true;
					affected++;
					q.push(neighbour);
				}
			}
		}
		return affected;
	}


	template<class PGraph>
	int WCinfluenceSpreadParallelFull(const PGraph& Graph, const vector<int> &seeds, const int &MC) {
		int SumAffected[24] = { 0 };
		int counter = 0;
		///////////
#pragma omp parallel sections
		{
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[0] += WCinfluenceSpreadParfull1(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[1] += WCinfluenceSpreadParfull2(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[2] += WCinfluenceSpreadParfull3(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[3] += WCinfluenceSpreadParfull4(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[4] += WCinfluenceSpreadParfull5(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[5] += WCinfluenceSpreadParfull6(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[6] += WCinfluenceSpreadParfull7(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[7] += WCinfluenceSpreadParfull8(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[8] += WCinfluenceSpreadParfull9(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[9] += WCinfluenceSpreadParfull10(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[10] += WCinfluenceSpreadParfull11(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[11] += WCinfluenceSpreadParfull12(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[12] += WCinfluenceSpreadParfull13(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[13] += WCinfluenceSpreadParfull14(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[14] += WCinfluenceSpreadParfull15(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[15] += WCinfluenceSpreadParfull16(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[16] += WCinfluenceSpreadParfull17(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[17] += WCinfluenceSpreadParfull18(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[18] += WCinfluenceSpreadParfull19(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[19] += WCinfluenceSpreadParfull20(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[20] += WCinfluenceSpreadParfull21(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[21] += WCinfluenceSpreadParfull22(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[22] += WCinfluenceSpreadParfull23(Graph, seeds);
				counter++;
			}
		}
#pragma omp section
		{
			for (int i = 0; i < MC / 24; i++) {
				SumAffected[23] += WCinfluenceSpreadParfull24(Graph, seeds);
				counter++;
			}
		}

		}
		///////////
		int sum = 0;
		for (size_t k = 0; k < 24; k++)
		{
			sum += SumAffected[k];
		}
		return sum / counter;
	}


}; 

