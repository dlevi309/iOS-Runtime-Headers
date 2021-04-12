/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSXPCConnection, _HKEntitlements, NSUUID, NSMutableSet;

@interface HDXPCClient : NSObject <NSCopying> {

	NSString* _entitlementsApplicationIdentifier;
	BOOL _isExtension;
	NSXPCConnection* _connection;
	_HKEntitlements* _entitlements;
	NSString* _name;
	NSString* _processBundleIdentifier;
	NSString* _containerAppBundleIdentifier;
	NSUUID* _UUID;
	NSMutableSet* _droppedEntitlements;

}

@property (readonly) NSUUID * UUID;                                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSMutableSet * droppedEntitlements;                //@synthesize droppedEntitlements=_droppedEntitlements - In the implementation block
@property (readonly) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (readonly) _HKEntitlements * entitlements;                            //@synthesize entitlements=_entitlements - In the implementation block
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isExtension;                                          //@synthesize isExtension=_isExtension - In the implementation block
@property (copy,readonly) NSString * applicationIdentifier; 
@property (copy,readonly) NSString * processBundleIdentifier;                   //@synthesize processBundleIdentifier=_processBundleIdentifier - In the implementation block
@property (copy,readonly) NSString * containerAppBundleIdentifier;              //@synthesize containerAppBundleIdentifier=_containerAppBundleIdentifier - In the implementation block
+(id)clientWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)processIdentifier;
-(NSUUID *)UUID;
-(id)valueForEntitlement:(id)arg1 ;
-(NSXPCConnection *)connection;
-(NSString *)applicationIdentifier;
-(_HKEntitlements *)entitlements;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)isExtension;
-(NSString *)processBundleIdentifier;
-(void)dropEntitlement:(id)arg1 ;
-(void)restoreEntitlement:(id)arg1 ;
-(id)initWithEntitlements:(id)arg1 ;
-(BOOL)hasRequiredEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)containerAppBundleIdentifier;
-(id)initWithConnection:(id)arg1 entitlements:(id)arg2 ;
-(id)_initWithConnection:(id)arg1 entitlements:(id)arg2 ;
-(NSMutableSet *)droppedEntitlements;
-(void)setDroppedEntitlements:(NSMutableSet *)arg1 ;
@end

