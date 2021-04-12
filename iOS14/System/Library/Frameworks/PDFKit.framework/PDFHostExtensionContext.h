/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <Foundation/NSExtensionContext.h>
#import <PDFKit/PDFHostProtocol.h>

@class PDFHostViewController, NSString;

@interface PDFHostExtensionContext : NSExtensionContext <PDFHostProtocol> {

	PDFHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) PDFHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setHostViewController:(PDFHostViewController *)arg1 ;
-(PDFHostViewController *)hostViewController;
-(oneway void)extensionToHost:(id)arg1 ;
@end

