/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


@class CLGpsPosition, IndoorProtocolProxy;

@interface ServiceState : NSObject {

	BOOL _pausedLocalization;
	BOOL _updateLocation;
	CLGpsPosition* _lastLocation;
	IndoorProtocolProxy* _delegateProxy;

}

@property (nonatomic,retain) CLGpsPosition * lastLocation;                     //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) BOOL pausedLocalization;                          //@synthesize pausedLocalization=_pausedLocalization - In the implementation block
@property (assign,nonatomic) BOOL updateLocation;                              //@synthesize updateLocation=_updateLocation - In the implementation block
@property (nonatomic,retain) IndoorProtocolProxy * delegateProxy;              //@synthesize delegateProxy=_delegateProxy - In the implementation block
-(void)setLastLocation:(CLGpsPosition *)arg1 ;
-(CLGpsPosition *)lastLocation;
-(IndoorProtocolProxy *)delegateProxy;
-(void)setDelegateProxy:(IndoorProtocolProxy *)arg1 ;
-(BOOL)pausedLocalization;
-(void)setPausedLocalization:(BOOL)arg1 ;
-(BOOL)updateLocation;
-(void)setUpdateLocation:(BOOL)arg1 ;
@end

