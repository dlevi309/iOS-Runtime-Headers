/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableArray, NSValue;

@interface UIKBTouchOrderedTaskList : NSObject {

	NSUUID* _touchUUID;
	NSObject*<OS_dispatch_queue> _touchStateTasksQueue;
	NSMutableArray* _touchStateTasks;
	NSValue* _currentTouchPoint;
	BOOL _ignoredOnBegin;
	unsigned long long _pathIndex;
	double _originalStartTime;

}

@property (nonatomic,retain,readonly) NSUUID * touchUUID;                       //@synthesize touchUUID=_touchUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex;                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) double originalStartTime;                        //@synthesize originalStartTime=_originalStartTime - In the implementation block
@property (nonatomic,retain,readonly) NSValue * currentTouchPoint;              //@synthesize currentTouchPoint=_currentTouchPoint - In the implementation block
@property (assign,nonatomic) BOOL ignoredOnBegin;                               //@synthesize ignoredOnBegin=_ignoredOnBegin - In the implementation block
@property (nonatomic,readonly) BOOL hasTasks; 
+(id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)addTask:(id)arg1 ;
-(unsigned long long)pathIndex;
-(NSUUID *)touchUUID;
-(id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2 ;
-(BOOL)hasTasks;
-(BOOL)isExecutingFirstTask;
-(void)removeTasksMatchingFilter:(/*^block*/id)arg1 ;
-(BOOL)executeTasksInView:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)firstTouchStateForUITouchPhase:(long long)arg1 ;
-(NSValue *)currentTouchPoint;
-(double)originalStartTime;
-(BOOL)ignoredOnBegin;
-(void)setIgnoredOnBegin:(BOOL)arg1 ;
@end

