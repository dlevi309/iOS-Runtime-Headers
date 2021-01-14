/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CLGpsPosition *)lastLocation;
-(void)setDelegateProxy:(IndoorProtocolProxy *)arg1 ;
-(void)setLastLocation:(CLGpsPosition *)arg1 ;
-(IndoorProtocolProxy *)delegateProxy;
-(BOOL)pausedLocalization;
-(void)setPausedLocalization:(BOOL)arg1 ;
-(BOOL)updateLocation;
-(void)setUpdateLocation:(BOOL)arg1 ;
@end

