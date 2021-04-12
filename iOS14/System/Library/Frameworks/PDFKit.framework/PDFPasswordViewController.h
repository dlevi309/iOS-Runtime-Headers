/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class UIView, PDFView;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {

	UIView* _passwordView;
	PDFView* _pdfView;

}
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(void)_commonInit;
-(void)loadView;
-(void)setPDFView:(id)arg1 ;
@end

