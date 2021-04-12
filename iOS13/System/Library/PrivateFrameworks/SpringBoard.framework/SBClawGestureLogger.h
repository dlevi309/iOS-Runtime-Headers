/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSDate, NSMutableSet;

@interface SBClawGestureLogger : NSObject {

	BOOL _didTriggerSOS;
	NSDate* _clawEventTimestamp;
	NSMutableSet* _activePressTypes;
	NSMutableSet* _participatingPressTypes;

}

@property (nonatomic,copy) NSDate * clawEventTimestamp;                           //@synthesize clawEventTimestamp=_clawEventTimestamp - In the implementation block
@property (assign,nonatomic) BOOL didTriggerSOS;                                  //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (nonatomic,retain) NSMutableSet * participatingPressTypes;              //@synthesize participatingPressTypes=_participatingPressTypes - In the implementation block
@property (nonatomic,retain) NSMutableSet * activePressTypes;                     //@synthesize activePressTypes=_activePressTypes - In the implementation block
-(id)init;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)didTriggerSOS;
-(void)noteGesturePressType:(long long)arg1 withPressPhase:(long long)arg2 ;
-(NSMutableSet *)activePressTypes;
-(void)noteSOSTriggered;
-(void)setActivePressTypes:(NSMutableSet *)arg1 ;
-(NSDate *)clawEventTimestamp;
-(NSMutableSet *)participatingPressTypes;
-(void)_publishLoggedData;
-(void)setClawEventTimestamp:(NSDate *)arg1 ;
-(void)_resetLoggedData;
-(void)setParticipatingPressTypes:(NSMutableSet *)arg1 ;
@end

