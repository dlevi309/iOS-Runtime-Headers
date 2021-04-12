/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKReporterRemoteContext.h>

@class NSString;

@interface DKReporterContext : NSExtensionContext <DKReporterRemoteContext>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)startRemoteReportWithComponentIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

