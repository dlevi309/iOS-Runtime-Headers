/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RMExtensionHostContext.h>
#import <libobjc.A.dylib/RMExtensionVendorContext.h>

@class NSString;

@interface RMExtensionContext : NSExtensionContext <RMExtensionHostContext, RMExtensionVendorContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

