/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_plistClasses;
+(id)_plistAndErrorClasses;
-(void)fetchThenApplyConfigurationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

