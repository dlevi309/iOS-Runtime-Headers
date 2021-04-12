/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXContentFilterFooterViewDelegate;
@class PXContentFilterState, UILabel, UIButton;

@interface PXContentFilterFooterView : UIView {

	PXContentFilterState* _filterState;
	UILabel* _captionLabel;
	UIButton* _filterButton;
	id<PXContentFilterFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXContentFilterFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXContentFilterState * filterState;                                 //@synthesize filterState=_filterState - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(PXContentFilterState *)filterState;
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(id<PXContentFilterFooterViewDelegate>)delegate;
-(void)_updateDisplay;
-(void)setDelegate:(id<PXContentFilterFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_showFilterUI:(id)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

