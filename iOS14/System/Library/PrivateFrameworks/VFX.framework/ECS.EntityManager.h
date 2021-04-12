/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
*/


@interface ECS.EntityManager : _UKNOWN_SUPERCLASS_ {

	 name;
	 entityFamilies;
	 allEntityClasses;
	 workerComponentStorage;
	 sceneComponentStorage;
	 groupsCount;
	 copyQueue;
	 copyGroup;
	 _entries;
	 entityCapacity;
	 entityCount;
	 lock;
	 firstFreeIndex;
	 measureIndexes;
	 scheduler;
	 queryManager;
	 globalCommandQueue;
	 commandQueueByWorkerIndex;
	 updateQueue;
	 didLoadBlocks;
	 nextFrameBlocks;
	 nextFrameBlocksLock;
	 invokeDidLoadBeforeFirstFrame;
	 runtimeThread;
	 stateDidChangeFn;
	 userLogger;
	 clock;
	 currentState;

}
@end

