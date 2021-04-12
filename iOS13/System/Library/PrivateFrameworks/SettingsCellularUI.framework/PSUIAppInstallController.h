/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class NSURLSession, NSString, PSUIAppDescription, NSURL;

@interface PSUIAppInstallController : NSObject {

	NSURLSession* _session;
	int _installState;
	NSString* _appID;
	NSString* _bundleID;
	PSUIAppDescription* _appDescription;
	NSURL* _installURL;
	NSURL* _moreAppsURL;

}

@property (retain) PSUIAppDescription * appDescription;              //@synthesize appDescription=_appDescription - In the implementation block
@property (retain) NSURL * installURL;                               //@synthesize installURL=_installURL - In the implementation block
@property (nonatomic,retain) NSURL * moreAppsURL;                    //@synthesize moreAppsURL=_moreAppsURL - In the implementation block
@property (nonatomic,readonly) NSString * appID;                     //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) int installState;                               //@synthesize installState=_installState - In the implementation block
+(id)lookupAppDescriptionForInstalledApp:(id)arg1 ;
+(id)loadIconFromURL:(id)arg1 session:(id)arg2 ;
+(void)saveAppDescriptionToCache:(id)arg1 ;
+(void)lookupAppFromStore:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)tryLoadAppDescriptionFromCache;
+(id)iconLocalCacheURLFromKey:(id)arg1 ;
-(void)load;
-(id)specifier;
-(NSString *)bundleID;
-(int)installState;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)appID;
-(void)installButtonTapped:(id)arg1 ;
-(NSURL *)installURL;
-(void)setInstallURL:(NSURL *)arg1 ;
-(id)initWithAppID:(id)arg1 carrierMoreAppsURL:(id)arg2 ;
-(BOOL)moreAppsAvailable;
-(void)moreAppsButtonTapped:(id)arg1 ;
-(PSUIAppDescription *)appDescription;
-(void)setAppDescription:(PSUIAppDescription *)arg1 ;
-(NSURL *)moreAppsURL;
-(void)setMoreAppsURL:(NSURL *)arg1 ;
@end

