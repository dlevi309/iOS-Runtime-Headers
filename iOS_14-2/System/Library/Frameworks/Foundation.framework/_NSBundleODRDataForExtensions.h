/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/_NSBundleODRDataCommon.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_NSBundleResourceRequestAppExtensionProtocol.h>

@class NSXPCConnection, NSString;

@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hostApplicationAssetPacksBecameAvailable:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameUnavailable:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)accessSandboxExtension:(id)arg1 ;
-(void)dealloc;
@end

