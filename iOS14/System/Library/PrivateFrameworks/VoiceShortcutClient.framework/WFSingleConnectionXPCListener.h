/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCInterface, NSXPCListener, NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface WFSingleConnectionXPCListener : NSObject <NSXPCListenerDelegate> {

	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	NSXPCListener* _listener;
	NSXPCConnection* _activeConnection;

}

@property (nonatomic,readonly) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,readonly) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * activeConnection;                //@synthesize activeConnection=_activeConnection - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCConnection *)activeConnection;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setActiveConnection:(NSXPCConnection *)arg1 ;
-(id)initWithExportedObject:(id)arg1 exportedInterface:(id)arg2 ;
@end

