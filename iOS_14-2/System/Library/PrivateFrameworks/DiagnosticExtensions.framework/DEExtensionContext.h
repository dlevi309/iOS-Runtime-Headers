/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(BOOL)hasEntitlement;
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)attachmentsForParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setupWithParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)teardownWithParameters:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)isExtensionEnhancedLoggingStateOnWithHandler:(/*^block*/id)arg1 ;
@end

