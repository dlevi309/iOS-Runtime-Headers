/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)startRemoteReportWithComponentIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)completeWithReport:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

