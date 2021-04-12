/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailDescriptionCell.h>

@protocol NTKCFaceDetailExpandableDescriptionCellDelegate;
@class UIButton, NSString;

@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell {

	BOOL _expanded;
	BOOL _canExpand;
	id<NTKCFaceDetailExpandableDescriptionCellDelegate> _delegate;
	UIButton* _moreButton;
	double _laidOutWidth;
	NSString* _laidOutContentSizeCategory;

}

@property (nonatomic,retain) UIButton * moreButton;                                                            //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic) double laidOutWidth;                                                              //@synthesize laidOutWidth=_laidOutWidth - In the implementation block
@property (nonatomic,retain) NSString * laidOutContentSizeCategory;                                            //@synthesize laidOutContentSizeCategory=_laidOutContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL canExpand;                                                                   //@synthesize canExpand=_canExpand - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                                    //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCFaceDetailExpandableDescriptionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(id)init;
-(id<NTKCFaceDetailExpandableDescriptionCellDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailExpandableDescriptionCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setMoreButton:(UIButton *)arg1 ;
-(UIButton *)moreButton;
-(id)_moreButton;
-(BOOL)canExpand;
-(void)_fontSizeDidChange;
-(void)setLaidOutWidth:(double)arg1 ;
-(void)setLaidOutContentSizeCategory:(NSString *)arg1 ;
-(void)setCanExpand:(BOOL)arg1 ;
-(void)_moreTapped;
-(double)laidOutWidth;
-(NSString *)laidOutContentSizeCategory;
@end

