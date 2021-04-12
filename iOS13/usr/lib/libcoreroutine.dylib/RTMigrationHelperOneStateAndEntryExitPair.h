/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject {

	RTStateModelOneState* _oneState;
	RTStateModelEntryExit* _entryExit;

}

@property (nonatomic,retain) RTStateModelOneState * oneState;                //@synthesize oneState=_oneState - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * entryExit;              //@synthesize entryExit=_entryExit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(RTStateModelOneState *)oneState;
-(RTStateModelEntryExit *)entryExit;
-(id)initWithOneState:(id)arg1 entryExit:(id)arg2 ;
-(void)setOneState:(RTStateModelOneState *)arg1 ;
-(void)setEntryExit:(RTStateModelEntryExit *)arg1 ;
@end

