/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

