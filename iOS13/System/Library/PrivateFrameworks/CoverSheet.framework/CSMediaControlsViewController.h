/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setContainerSize:(CGSize)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(long long)presentationPriority;
-(void)_layoutMediaControls;
-(CGRect)_suggestedFrameForMediaControls;
-(void)_updatePersistentUpdatesEnabled:(BOOL)arg1 ;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2 ;
@end

