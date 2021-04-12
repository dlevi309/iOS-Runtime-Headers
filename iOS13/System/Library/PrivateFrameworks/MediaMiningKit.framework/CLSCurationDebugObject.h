/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSMutableArray, NSArray;

@interface CLSCurationDebugObject : NSObject {

	NSMutableArray* _stateHistory;
	unsigned long long _tentativeSectionStateHistoryLength;
	unsigned long long _stateAtBeginningOfTentativeSection;
	unsigned long long _state;

}

@property (readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (readonly) NSArray * stateHistory;                //@synthesize stateHistory=_stateHistory - In the implementation block
+(id)stringForState:(unsigned long long)arg1 ;
-(id)init;
-(id)dictionaryRepresentation;
-(unsigned long long)state;
-(id)timestamp;
-(void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
-(void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;
-(void)beginTentativeSection;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(NSArray *)stateHistory;
@end

