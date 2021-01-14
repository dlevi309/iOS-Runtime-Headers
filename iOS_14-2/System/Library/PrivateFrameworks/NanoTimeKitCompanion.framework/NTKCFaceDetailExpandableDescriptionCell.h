/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(void)setMoreButton:(UIButton *)arg1 ;
-(id)init;
-(id<NTKCFaceDetailExpandableDescriptionCellDelegate>)delegate;
-(BOOL)expanded;
-(void)setDelegate:(id<NTKCFaceDetailExpandableDescriptionCellDelegate>)arg1 ;
-(BOOL)canExpand;
-(void)layoutSubviews;
-(id)_moreButton;
-(UIButton *)moreButton;
-(void)_fontSizeDidChange;
-(void)setLaidOutWidth:(double)arg1 ;
-(void)setLaidOutContentSizeCategory:(NSString *)arg1 ;
-(void)setCanExpand:(BOOL)arg1 ;
-(void)_moreTapped;
-(double)laidOutWidth;
-(NSString *)laidOutContentSizeCategory;
@end

