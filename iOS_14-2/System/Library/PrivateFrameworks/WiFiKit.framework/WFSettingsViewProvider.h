/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <libobjc.A.dylib/WFNetworkViewProvider.h>

@class NSMapTable, WFSettingsController, NSString;

@interface WFSettingsViewProvider : NSObject <WFNetworkViewProvider> {

	NSMapTable* _credentialsViewControllerMap;
	WFSettingsController* _settingsController;

}

@property (nonatomic,retain) NSMapTable * credentialsViewControllerMap;              //@synthesize credentialsViewControllerMap=_credentialsViewControllerMap - In the implementation block
@property (nonatomic,retain) WFSettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(WFSettingsController *)settingsController;
-(void)setSettingsController:(WFSettingsController *)arg1 ;
-(id)credentialsViewControllerWithContext:(id)arg1 ;
-(id)certificateViewControllerWithContext:(id)arg1 ;
-(id)networkErrorViewControllerWithContext:(id)arg1 ;
-(id)otherNetworkViewControllerWithContext:(id)arg1 ;
-(id)networkDetailsViewControllerWithContext:(id)arg1 ;
-(void)didDismissNetworkViewController:(id)arg1 forContext:(id)arg2 ;
-(NSMapTable *)credentialsViewControllerMap;
-(void)setCredentialsViewControllerMap:(NSMapTable *)arg1 ;
@end

