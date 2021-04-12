/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CRKInstructorExtensionVendor.h>

@class NSXPCListener, NSString;

@interface CRKInstructorExtensionContext : NSExtensionContext <NSXPCListenerDelegate, CRKInstructorExtensionVendor> {

	NSXPCListener* mListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)listenerEndpointWithCompletion:(/*^block*/id)arg1 ;
@end

