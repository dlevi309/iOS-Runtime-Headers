/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableArray, NEExtensionProviderContext, NSString;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {

	NSMutableArray* _listeners;
	NSMutableArray* _contexts;

}

@property (nonatomic,readonly) NSMutableArray * listeners;                   //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contexts;                    //@synthesize contexts=_contexts - In the implementation block
@property (readonly) NEExtensionProviderContext * firstContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(NSMutableArray *)listeners;
-(void)start;
-(id)getListenerForExtensionPoint:(id)arg1 ;
-(void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2 ;
-(NEExtensionProviderContext *)firstContext;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeProviderContext:(id)arg1 ;
-(NSMutableArray *)contexts;
@end

