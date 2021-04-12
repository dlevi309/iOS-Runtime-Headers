/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isBusy;
-(int)busyCount;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)setBusyCount:(int)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
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

