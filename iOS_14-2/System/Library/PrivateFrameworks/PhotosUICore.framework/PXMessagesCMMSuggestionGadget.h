/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate, PXCMMSuggestion, PXMessagesCMMSuggestionGadgetActionDelegate;
@class PXUpdater, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, PXGadgetSpec, NSString;

@interface PXMessagesCMMSuggestionGadget : UIViewController <PXGadget> {

	PXUpdater* _updater;
	PXCMMPosterHeaderView* _posterHeaderView;
	PXRoundedCornerOverlayView* _roundedOverlayView;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXGadgetSpec* _gadgetSpec;
	id<PXCMMSuggestion> _suggestion;
	id<PXMessagesCMMSuggestionGadgetActionDelegate> _actionDelegate;

}

@property (nonatomic,retain) id<PXCMMSuggestion> suggestion;                                                     //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<PXMessagesCMMSuggestionGadgetActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                                          //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                                                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXGadgetSpec *)gadgetSpec;
-(NSString *)localizedTitle;
-(unsigned long long)gadgetCapabilities;
-(void)viewWillLayoutSubviews;
-(unsigned long long)gadgetType;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(id<PXMessagesCMMSuggestionGadgetActionDelegate>)actionDelegate;
-(id<PXCMMSuggestion>)suggestion;
-(void)_scheduleLayout;
-(void)_updatePosterHeaderView;
-(void)userDidSelectGadget;
-(id)contentViewController;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)setActionDelegate:(id<PXMessagesCMMSuggestionGadgetActionDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidLoad;
-(id)initWithSuggestion:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSuggestion:(id<PXCMMSuggestion>)arg1 ;
-(unsigned long long)headerStyle;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

