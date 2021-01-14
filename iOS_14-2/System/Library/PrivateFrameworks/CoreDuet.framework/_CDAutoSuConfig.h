/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@interface _CDAutoSuConfig : NSObject {

	BOOL _alwaysFallBackToDefault;
	BOOL _alwaysReturnUnlockNow;
	BOOL _allowUnlockBeforeNow;
	int _restrictionStartInSlot;
	int _restrictionEndInSlot;
	int _suStartDefaultTime;
	int _suEndDefaultTimeOffsetFromSuStart;
	int _unlockMarginInSlot;
	double _unlockThreshold;
	double _startThreshold;
	double _endThreshold;

}

@property (assign,nonatomic) int restrictionStartInSlot;                         //@synthesize restrictionStartInSlot=_restrictionStartInSlot - In the implementation block
@property (assign,nonatomic) int restrictionEndInSlot;                           //@synthesize restrictionEndInSlot=_restrictionEndInSlot - In the implementation block
@property (assign,nonatomic) int suStartDefaultTime;                             //@synthesize suStartDefaultTime=_suStartDefaultTime - In the implementation block
@property (assign,nonatomic) int suEndDefaultTimeOffsetFromSuStart;              //@synthesize suEndDefaultTimeOffsetFromSuStart=_suEndDefaultTimeOffsetFromSuStart - In the implementation block
@property (assign,nonatomic) BOOL alwaysFallBackToDefault;                       //@synthesize alwaysFallBackToDefault=_alwaysFallBackToDefault - In the implementation block
@property (assign,nonatomic) BOOL alwaysReturnUnlockNow;                         //@synthesize alwaysReturnUnlockNow=_alwaysReturnUnlockNow - In the implementation block
@property (assign,nonatomic) BOOL allowUnlockBeforeNow;                          //@synthesize allowUnlockBeforeNow=_allowUnlockBeforeNow - In the implementation block
@property (assign,nonatomic) double unlockThreshold;                             //@synthesize unlockThreshold=_unlockThreshold - In the implementation block
@property (assign,nonatomic) double startThreshold;                              //@synthesize startThreshold=_startThreshold - In the implementation block
@property (assign,nonatomic) double endThreshold;                                //@synthesize endThreshold=_endThreshold - In the implementation block
@property (assign,nonatomic) int unlockMarginInSlot;                             //@synthesize unlockMarginInSlot=_unlockMarginInSlot - In the implementation block
-(double)unlockThreshold;
-(void)setAllowUnlockBeforeNow:(BOOL)arg1 ;
-(BOOL)alwaysReturnUnlockNow;
-(void)setUnlockThreshold:(double)arg1 ;
-(double)startThreshold;
-(void)setStartThreshold:(double)arg1 ;
-(void)setRestrictionStartInSlot:(int)arg1 ;
-(void)setParam;
-(void)setUnlockMarginInSlot:(int)arg1 ;
-(int)readConfig;
-(BOOL)allowUnlockBeforeNow;
-(int)suEndDefaultTimeOffsetFromSuStart;
-(BOOL)validParam;
-(double)endThreshold;
-(int)restrictionStartInSlot;
-(void)setAlwaysReturnUnlockNow:(BOOL)arg1 ;
-(int)restrictionEndInSlot;
-(int)suStartDefaultTime;
-(void)setSuStartDefaultTime:(int)arg1 ;
-(void)setSuEndDefaultTimeOffsetFromSuStart:(int)arg1 ;
-(void)setAlwaysFallBackToDefault:(BOOL)arg1 ;
-(void)setRestrictionEndInSlot:(int)arg1 ;
-(void)setEndThreshold:(double)arg1 ;
-(int)unlockMarginInSlot;
-(BOOL)alwaysFallBackToDefault;
@end

