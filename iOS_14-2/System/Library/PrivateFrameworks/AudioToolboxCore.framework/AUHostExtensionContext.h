/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <Foundation/NSExtensionContext.h>

@class NSExtension, AUHostDelegate, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext {

	NSExtension* _extension;
	AUHostDelegate* _delegate;

}

@property (nonatomic,retain) NSExtension * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) AUHostDelegate * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * xpcConnection; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NSXPCConnection *)xpcConnection;
-(AUHostDelegate *)delegate;
-(void)setExtension:(NSExtension *)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(void)setDelegate:(AUHostDelegate *)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(NSExtension *)extension;
-(void)dealloc;
@end

