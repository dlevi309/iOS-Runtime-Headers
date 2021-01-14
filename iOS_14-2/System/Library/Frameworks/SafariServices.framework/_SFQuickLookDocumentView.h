/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>

@protocol _SFQuickLookDocumentViewDelegate;
@class UIView, _SFQuickLookDocumentInfoView, NSArray, UIStackView, NSLayoutConstraint, NSString;

@interface _SFQuickLookDocumentView : UIScrollView <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {

	UIView* _wrapperView;
	UIView* _contentView;
	_SFQuickLookDocumentInfoView* _documentInfoView;
	NSArray* _actionButtons;
	UIStackView* _actionButtonsView;
	NSLayoutConstraint* _documentInfoViewBottomAnchorConstraint;
	id<_SFQuickLookDocumentViewDelegate> _quickLookDocumentViewDelegate;

}

@property (assign,nonatomic,__weak) id<_SFQuickLookDocumentViewDelegate> quickLookDocumentViewDelegate;              //@synthesize quickLookDocumentViewDelegate=_quickLookDocumentViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setUpLayoutConstraints;
-(void)_updatePropertiesDefinedByContentSizeCategory;
-(void)_configureOrientationBasedConstraints:(long long)arg1 ;
-(id<_SFQuickLookDocumentViewDelegate>)quickLookDocumentViewDelegate;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)_actionButtonTapped:(id)arg1 ;
-(void)setQuickLookDocumentViewDelegate:(id<_SFQuickLookDocumentViewDelegate>)arg1 ;
-(void)updateDocumentIcon:(id)arg1 ;
-(void)updateDocumentFileName:(id)arg1 ;
-(void)updateDocumentFileType:(id)arg1 ;
-(void)updateDocumentFileSize:(id)arg1 ;
-(void)updateActionTitles:(id)arg1 ;
-(CGRect)frameForButtonAtIndex:(unsigned long long)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
@end

