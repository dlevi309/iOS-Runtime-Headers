/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
*/


@interface ADTrackingTransparency : NSObject

@property (nonatomic,readonly) BOOL crossAppTrackingAllowedSwitchEnabled; 
@property (assign,nonatomic) BOOL crossAppTrackingAllowed; 
@property (nonatomic,readonly) BOOL personalizedAdsSwitchEnabled; 
@property (assign,nonatomic) BOOL personalizedAds; 
-(BOOL)crossAppTrackingAllowedSwitchEnabled;
-(BOOL)_userAllowedToChangeSettings;
-(BOOL)personalizedAdsSwitchEnabled;
-(id)personalizedXPCConnection:(/*^block*/id)arg1 withInvalidation:(/*^block*/id)arg2 ;
-(id)personalizedAdsProxy:(id)arg1 ;
-(BOOL)crossAppTrackingAllowed;
-(void)setCrossAppTrackingAllowed:(BOOL)arg1 ;
-(BOOL)personalizedAds;
-(void)setPersonalizedAds:(BOOL)arg1 ;
@end

