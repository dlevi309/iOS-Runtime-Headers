/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, NSString, NSNumber, NSMutableDictionary, ACDAccountStoreFilter;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	CFBundleRef _bundle;
	NSString* _bundleID;
	BOOL _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;
	ACDAccountStoreFilter* _filter;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) ACDAccountStoreFilter * filter;              //@synthesize filter=_filter - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)_bundleForNonPlugInPID:(int)arg1 ;
+(id)_bundleIDForPID:(int)arg1 ;
+(id)_bundleForPID:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(CFBundleRef)bundle;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(id)initWithConnection:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setFilter:(ACDAccountStoreFilter *)arg1 ;
-(ACDAccountStoreFilter *)filter;
-(NSNumber *)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSString *)localizedAppName;
-(NSString *)adamOrDisplayID;
-(id)_displayNameFromLaunchServicesForPID:(int)arg1 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
@end

