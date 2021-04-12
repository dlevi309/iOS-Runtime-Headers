/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


@interface FMFNoNetworkAlert : NSObject {

	BOOL _globalCellularEnabled;

}

@property (assign,getter=isGlobalCellularEnabled,nonatomic) BOOL globalCellularEnabled;              //@synthesize globalCellularEnabled=_globalCellularEnabled - In the implementation block
+(BOOL)isAirplaneModeEnabled;
+(unsigned long long)reasonForNoInternet;
+(id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1 ;
+(BOOL)isGlobalCellularEnabled;
+(id)newAlertController;
-(BOOL)isGlobalCellularEnabled;
-(void)setGlobalCellularEnabled:(BOOL)arg1 ;
@end

