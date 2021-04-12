/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISSoftwareApplication, NSNumber, NSString;

@interface SUScriptSoftwareApplication : SUScriptObject {

	ISSoftwareApplication* _application;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * bundleID; 
@property (readonly) NSString * bundleShortVersionString; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) NSNumber * dsID; 
@property (readonly) NSNumber * ratingRank; 
@property (readonly) NSString * ratingSystem; 
@property (readonly) NSString * softwareType; 
@property (readonly) NSString * storeFrontID; 
@property (readonly) NSNumber * versionID; 
@property (readonly) NSString * environmentProduction; 
@property (readonly) NSString * environmentSandbox; 
@property (readonly) long long launchResultApplicationDisabled; 
@property (readonly) long long launchResultApplicationNotFound; 
@property (readonly) long long launchResultInvalidArgument; 
@property (readonly) long long launchResultLaunchOrSuspendInProgress; 
@property (readonly) long long launchResultLocked; 
@property (readonly) long long launchResultLockedOut; 
@property (readonly) long long launchResultSecurityPolicy; 
@property (readonly) long long launchResultSpringBoardUnavailable; 
@property (readonly) long long launchResultSuccess; 
@property (readonly) long long launchResultSyncing; 
@property (readonly) NSString * softwareTypeNewsstand; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundleID;
-(NSNumber *)ratingRank;
-(NSString *)bundleVersion;
-(NSNumber *)versionID;
-(id)_className;
-(id)initWithApplication:(id)arg1 ;
-(id)attributeKeys;
-(NSNumber *)adamID;
-(NSString *)ratingSystem;
-(NSString *)softwareType;
-(NSString *)storeFrontID;
-(id)scriptAttributeKeys;
-(NSString *)environmentSandbox;
-(NSString *)bundleShortVersionString;
-(void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2 ;
-(long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3 ;
-(NSNumber *)dsID;
-(NSString *)environmentProduction;
-(long long)launchResultApplicationDisabled;
-(long long)launchResultApplicationNotFound;
-(long long)launchResultInvalidArgument;
-(long long)launchResultLaunchOrSuspendInProgress;
-(long long)launchResultLocked;
-(long long)launchResultLockedOut;
-(long long)launchResultSecurityPolicy;
-(long long)launchResultSpringBoardUnavailable;
-(long long)launchResultSuccess;
-(long long)launchResultSyncing;
-(NSString *)softwareTypeNewsstand;
@end

