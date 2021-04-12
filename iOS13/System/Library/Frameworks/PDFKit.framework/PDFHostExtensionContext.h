/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(PDFHostViewController *)arg1 ;
-(PDFHostViewController *)hostViewController;
-(oneway void)extensionToHost:(id)arg1 ;
@end

