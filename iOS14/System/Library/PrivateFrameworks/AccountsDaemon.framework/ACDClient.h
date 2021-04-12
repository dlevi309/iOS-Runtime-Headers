/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, NSString, NSNumber, NSMutableDictionary, ACDAccountStoreFilter, NSSet;

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
	NSSet* _monitoredAccountTypes;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) ACDAccountStoreFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSSet * monitoredAccountTypes;               //@synthesize monitoredAccountTypes=_monitoredAccountTypes - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)_bundleForNonPlugInPID:(int)arg1 ;
+(id)_bundleForPID:(int)arg1 ;
+(id)_bundleIDForPID:(int)arg1 ;
-(CFBundleRef)bundle;
-(void)setFilter:(ACDAccountStoreFilter *)arg1 ;
-(ACDAccountStoreFilter *)filter;
-(NSNumber *)pid;
-(id)initWithConnection:(id)arg1 ;
-(void)setMonitoredAccountTypes:(NSSet *)arg1 ;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)name;
-(id)description;
-(id)_rawValueForEntitlement:(id)arg1 ;
-(NSString *)adamOrDisplayID;
-(NSSet *)monitoredAccountTypes;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(id)_displayNameFromLaunchServicesForPID:(int)arg1 ;
-(NSString *)localizedAppName;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)dealloc;
@end

