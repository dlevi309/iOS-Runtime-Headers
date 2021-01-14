/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallSource.h>

@class NSString, NSURL, NSXPCConnection, NSSet;

@interface CXXPCCallSource : CXCallSource {

	BOOL _hasVoIPBackgroundMode;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _localizedName;
	NSXPCConnection* _connection;
	NSString* _applicationIdentifier;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                           //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasVoIPBackgroundMode;                  //@synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode - In the implementation block
-(BOOL)isConnected;
-(id)localizedName;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)bundleURL;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(int)processIdentifier;
-(id)init;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(NSString *)bundleIdentifier;
-(SCD_Struct_CX1)auditToken;
-(NSString *)applicationIdentifier;
-(NSXPCConnection *)connection;
-(id)vendorProtocolDelegate;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasVoIPBackgroundMode;
-(BOOL)isPermittedToUseBluetoothAccessories;
-(void)setHasVoIPBackgroundMode:(BOOL)arg1 ;
-(id)identifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

