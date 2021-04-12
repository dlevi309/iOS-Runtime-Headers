/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@class PKHeroCardExplainationHeaderView, PKAppletSubcredentialSharingRequest, NSString;

@interface PKAppletSubcredentialSharingExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKViewControllerPreflightable> {

	PKHeroCardExplainationHeaderView* _heroCardView;
	PKAppletSubcredentialSharingRequest* _sharingRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithSharingRequest:(id)arg1 ;
-(void)_openMessagesToPresentAction;
@end

