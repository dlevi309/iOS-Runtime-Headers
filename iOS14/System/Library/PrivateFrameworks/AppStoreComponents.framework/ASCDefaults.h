/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSString, NSNumber;

@interface ASCDefaults : NSObject {

	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * storefrontLocaleID; 
@property (assign,nonatomic) BOOL forceRightToLeftLayout; 
@property (assign,nonatomic) BOOL disableShutdownTimer; 
@property (assign,nonatomic) BOOL enableWebInspector; 
@property (nonatomic,copy) NSNumber * overlaysRateLimitRequestsPerSecond; 
@property (nonatomic,copy) NSNumber * overlaysRateLimitTimeWindow; 
@property (nonatomic,copy) NSNumber * overlaysLoadTimeout; 
+(id)daemonDefaults;
-(id)initWithBundleID:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSNumber *)overlaysRateLimitRequestsPerSecond;
-(void)setOverlaysRateLimitRequestsPerSecond:(NSNumber *)arg1 ;
-(NSNumber *)overlaysRateLimitTimeWindow;
-(void)setOverlaysRateLimitTimeWindow:(NSNumber *)arg1 ;
-(NSNumber *)overlaysLoadTimeout;
-(void)setOverlaysLoadTimeout:(NSNumber *)arg1 ;
-(NSString *)storefrontLocaleID;
-(BOOL)forceRightToLeftLayout;
-(void)setStorefrontLocaleID:(NSString *)arg1 ;
-(void)setForceRightToLeftLayout:(BOOL)arg1 ;
-(BOOL)disableShutdownTimer;
-(void)setDisableShutdownTimer:(BOOL)arg1 ;
-(BOOL)enableWebInspector;
-(void)setEnableWebInspector:(BOOL)arg1 ;
@end

