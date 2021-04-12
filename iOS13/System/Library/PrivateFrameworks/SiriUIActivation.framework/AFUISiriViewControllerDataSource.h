/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/


@protocol AFUISiriViewControllerDataSource <NSObject>
@optional
-(id)starkAppBundleIdentifierContextForSiriViewController:(id)arg1;
-(id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg1;

@required
-(id)bulletinsForSiriViewController:(id)arg1;
-(id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
-(unsigned long long)lockStateForSiriViewController:(id)arg1;
-(id)contextAppInfosForSiriViewController:(id)arg1;

@end

