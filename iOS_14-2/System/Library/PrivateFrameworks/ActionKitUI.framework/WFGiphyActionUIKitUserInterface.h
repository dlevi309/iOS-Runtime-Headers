/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/WFGiphyActionUserInterface.h>
#import <libobjc.A.dylib/WFGiphyViewControllerDelegate.h>

@class NSString;

@interface WFGiphyActionUIKitUserInterface : WFActionUserInterface <UIAdaptivePresentationControllerDelegate, WFGiphyActionUserInterface, WFGiphyViewControllerDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithQuery:(id)arg1 selectMultiple:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)giphyViewControllerDidCancel:(id)arg1 ;
-(void)giphyViewController:(id)arg1 didSelectObjects:(id)arg2 ;
-(void)finishWithContent:(id)arg1 error:(id)arg2 ;
@end

