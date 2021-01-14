/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/MRPlatterViewControllerDelegate.h>
#import <libobjc.A.dylib/CSAdjunctItemHosting.h>

@class MRPlatterViewController, NSString, NSArray;

@interface CSMediaControlsViewController : CSCoverSheetViewControllerBase <MRPlatterViewControllerDelegate, CSAdjunctItemHosting> {

	MRPlatterViewController* _platterViewController;
	CGSize _containerSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(Class)viewClass;
-(void)setContainerSize:(CGSize)arg1 ;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)_updatePersistentUpdatesEnabled:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(long long)presentationPriority;
-(NSArray *)requiredVisualStyleCategories;
-(id)init;
-(void)_layoutMediaControls;
-(BOOL)handleEvent:(id)arg1 ;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGSize)preferredContentSize;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGRect)_suggestedFrameForMediaControls;
@end

