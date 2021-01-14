/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <PlugInKit/PKPlugInCore.h>
#import <libobjc.A.dylib/PKCorePlugInProtocol.h>
#import <libobjc.A.dylib/PKSubsystemServicePersonality.h>

@class NSDictionary, NSString, NSURL, NSUUID, NSXPCConnection, NSUserDefaults;

@interface PKServicePersonality : PKPlugInCore <PKCorePlugInProtocol, PKSubsystemServicePersonality> {

	id _plugInPrincipal;
	id _hostPrincipal;
	id _embeddedPrincipal;
	NSXPCConnection* _connection;
	NSUserDefaults* _preferences;

}

@property (retain) id plugInPrincipal;                                 //@synthesize plugInPrincipal=_plugInPrincipal - In the implementation block
@property (retain) id hostPrincipal;                                   //@synthesize hostPrincipal=_hostPrincipal - In the implementation block
@property (retain) id embeddedPrincipal;                               //@synthesize embeddedPrincipal=_embeddedPrincipal - In the implementation block
@property (retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (retain) NSUserDefaults * preferences;                       //@synthesize preferences=_preferences - In the implementation block
@property (copy) NSDictionary * _userInfo; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlugInPrincipal:(id)arg1 ;
-(id)hostPrincipal;
-(id)embeddedPrincipal;
-(void)setEmbeddedPrincipal:(id)arg1 ;
-(id)findProtocol:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setHostPrincipal:(id)arg1 ;
-(id)setupWithIdentifier:(id)arg1 extensionPointPlatform:(unsigned)arg2 ;
-(id)plugInPrincipal;
-(NSUserDefaults *)preferences;
-(void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(/*^block*/id)arg4 ;
-(void)setPreferences:(NSUserDefaults *)arg1 ;
-(id)defaultPrincipalObject;
-(NSString *)description;
-(double)cleanExitTimeout;
-(NSXPCConnection *)connection;
-(void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)hostHasControl;
-(void)shutdownPlugIn;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)beginUsingPlugIn:(id)arg1 ready:(/*^block*/id)arg2 ;
-(void)prepareUsing:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

