/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/SXDocumentSectionItemProvider.h>

@interface NewsUI2.PaidBundleLinksHeaderViewController : UIViewController <UITextViewDelegate, SXDocumentSectionItemProvider> {

	 eventHandler;
	 viewProvider;
	 headerDelegate;

}
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewDidLayoutSubviews;
-(void)requestDismissal;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(double)sectionItemHeightForSize:(CGSize)arg1 traitCollection:(id)arg2 ;
-(id)sectionItemViewController;
@end

