/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <Foundation/NSExtensionContext.h>
#import <PDFKit/PDFExtensionProtocol.h>

@class PDFExtensionViewController, NSString;

@interface PDFExtensionContext : NSExtensionContext <PDFExtensionProtocol> {

	PDFExtensionViewController* _extensionViewController;

}

@property (assign,nonatomic,__weak) PDFExtensionViewController * extensionViewController;              //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(PDFExtensionViewController *)extensionViewController;
-(void)setExtensionViewController:(PDFExtensionViewController *)arg1 ;
-(oneway void)hostToExtension:(id)arg1 ;
@end

