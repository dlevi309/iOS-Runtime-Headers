/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLoginURL:(NSURL *)arg1 ;
-(HKHealthRecordsStore *)healthRecordsStore;
-(id)safariViewController:(id)arg1 excludedActivityTypesForURL:(id)arg2 title:(id)arg3 ;
-(id)_init;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(NSURL *)loginURL;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
@end

