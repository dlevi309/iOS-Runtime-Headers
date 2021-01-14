/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <libobjc.A.dylib/ICQUpgradeFlowManagerDelegate.h>

@class NSString;

@interface ICQUpgradeFlowPresenter : NSObject <ICQUpgradeFlowManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)upgradeFlowManagerDidCancel:(id)arg1 ;
-(void)upgradeFlowManagerDidComplete:(id)arg1 ;
-(void)presentFlowWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

