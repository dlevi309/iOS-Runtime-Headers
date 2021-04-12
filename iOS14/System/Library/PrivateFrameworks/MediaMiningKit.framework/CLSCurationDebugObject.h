/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(id)init;
-(id)timestamp;
-(unsigned long long)state;
-(void)endTentativeSectionWithSuccess:(BOOL)arg1 ;
-(void)beginTentativeSection;
-(void)setState:(unsigned long long)arg1 withReason:(id)arg2 agent:(id)arg3 stage:(id)arg4 ;
-(void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3 ;
-(NSArray *)stateHistory;
@end

