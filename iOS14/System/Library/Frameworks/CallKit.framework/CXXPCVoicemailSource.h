/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CXVoicemailSource.h>

@class NSString, NSURL, NSXPCConnection, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource {

	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSXPCConnection* _connection;
	NSString* _applicationIdentifier;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                           //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
-(BOOL)isConnected;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)bundleURL;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(int)processIdentifier;
-(id)init;
-(BOOL)isPermittedToUsePrivateAPI;
-(NSString *)bundleIdentifier;
-(NSString *)applicationIdentifier;
-(NSXPCConnection *)connection;
-(id)vendorProtocolDelegate;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)identifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

