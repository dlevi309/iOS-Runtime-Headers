/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class HKHealthRecordsStore, NSURL, NSString;

@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject <SFSafariViewControllerDelegate> {

	HKHealthRecordsStore* _healthRecordsStore;
	NSURL* _loginURL;

}

@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;              //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,retain) NSURL * loginURL;                                       //@synthesize loginURL=_loginURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSafariDelegate;
-(id)init;
-(id)_init;
-(id)safariViewController:(id)arg1 excludedActivityTypesForURL:(id)arg2 title:(id)arg3 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
-(void)setLoginURL:(NSURL *)arg1 ;
-(NSURL *)loginURL;
@end

