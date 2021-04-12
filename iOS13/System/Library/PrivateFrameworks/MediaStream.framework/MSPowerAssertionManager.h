/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@interface MSPowerAssertionManager : NSObject {

	BOOL _isAssertingPowerAssertion;
	BOOL _isBusy;
	int _busyCount;
	int _UIBusyCount;
	unsigned _assertionID;

}

@property (assign,nonatomic) BOOL isBusy;                                 //@synthesize isBusy=_isBusy - In the implementation block
@property (assign,nonatomic) BOOL isAssertingPowerAssertion;              //@synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
@property (assign,nonatomic) int busyCount;                               //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                             //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
+(id)sharedManager;
-(void)setIsBusy:(BOOL)arg1 ;
-(BOOL)isBusy;
-(int)busyCount;
-(void)setBusyCount:(int)arg1 ;
-(void)setAssertionID:(unsigned)arg1 ;
-(unsigned)assertionID;
-(void)retainBusy;
-(void)releaseBusy;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(void)_assertPowerAssertion;
-(void)_deassertPowerAssertion;
-(void)_recomputePowerAssertion;
-(void)setUIBusyCount:(int)arg1 ;
-(void)toggleAssertion;
-(int)UIBusyCount;
-(BOOL)isAssertingPowerAssertion;
-(void)setIsAssertingPowerAssertion:(BOOL)arg1 ;
@end

