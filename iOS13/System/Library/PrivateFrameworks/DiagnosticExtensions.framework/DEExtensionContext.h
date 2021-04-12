/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DEExtensionVendorProtocol.h>

@class NSString;

@interface DEExtensionContext : NSExtensionContext <DEExtensionVendorProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)hasEntitlement;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

