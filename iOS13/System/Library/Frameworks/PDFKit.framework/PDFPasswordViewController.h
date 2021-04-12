/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIDocumentPasswordViewDelegate.h>

@class UIView, PDFView;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {

	UIView* _passwordView;
	PDFView* _pdfView;

}
-(void)_commonInit;
-(void)loadView;
-(void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2 ;
-(void)setPDFView:(id)arg1 ;
@end

