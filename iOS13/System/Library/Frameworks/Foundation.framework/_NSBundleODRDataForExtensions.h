/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)dataForBundle:(id)arg1 createIfRequired:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)accessSandboxExtension:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameAvailable:(id)arg1 ;
-(void)hostApplicationAssetPacksBecameUnavailable:(id)arg1 ;
@end

