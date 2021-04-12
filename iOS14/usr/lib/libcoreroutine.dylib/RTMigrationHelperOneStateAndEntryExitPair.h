/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject {

	RTStateModelOneState* _oneState;
	RTStateModelEntryExit* _entryExit;

}

@property (nonatomic,retain) RTStateModelOneState * oneState;                //@synthesize oneState=_oneState - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * entryExit;              //@synthesize entryExit=_entryExit - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(RTStateModelOneState *)oneState;
-(RTStateModelEntryExit *)entryExit;
-(id)initWithOneState:(id)arg1 entryExit:(id)arg2 ;
-(void)setOneState:(RTStateModelOneState *)arg1 ;
-(void)setEntryExit:(RTStateModelEntryExit *)arg1 ;
@end

