/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol TVDocumentViewControllerDelegate;
@class NSDictionary, TVApplicationController;

@interface TVDocumentViewController : UIViewController {

	struct {
		BOOL respondsToWillUpdate;
		BOOL respondsToDidUpdate;
		BOOL respondsToHandleEvent;
		BOOL respondsToDidFailWithError;
		BOOL respondsToDidUpdateWithContext;
	}  _delegateFlags;
	NSDictionary* _documentContext;
	TVApplicationController* _appController;
	id<TVDocumentViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSDictionary * documentContext;                                    //@synthesize documentContext=_documentContext - In the implementation block
@property (nonatomic,__weak,readonly) TVApplicationController * appController;                  //@synthesize appController=_appController - In the implementation block
@property (assign,nonatomic,__weak) id<TVDocumentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)viewControllerWithContext:(id)arg1 forAppController:(id)arg2 ;
-(id<TVDocumentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVDocumentViewControllerDelegate>)arg1 ;
-(TVApplicationController *)appController;
-(void)setDocumentContext:(NSDictionary *)arg1 ;
-(NSDictionary *)documentContext;
-(void)didChangeDocumentContext;
-(id)tvdvc_initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateUsingContext:(id)arg1 ;
-(void)willUpdateDocument;
-(void)didUpdateDocument;
-(void)didUpdateWithContext:(id)arg1 ;
-(void)didFailUpdateWithError:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 withElement:(id)arg2 targetResponder:(id)arg3 ;
@end

