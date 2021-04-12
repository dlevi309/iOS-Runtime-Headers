/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)identifier;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSXPCConnection *)connection;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(BOOL)isConnected;
-(id)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePrivateAPI;
@end

