/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HFCameraImageObserver.h>

@class UILabel, UIView, NSLayoutConstraint, NSArray;

@interface HURecordingEventCellFamiliarFacesView : UIView <HFCameraImageObserver> {

	UILabel* _titleLabel;
	UIView* _pointerView;
	NSLayoutConstraint* _leftTitleConstraint;
	double _maxWidthForNames;
	NSArray* _imageViews;
	NSArray* _sortedPeople;

}

@property (nonatomic,retain) UILabel * titleLabel;                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * pointerView;                                  //@synthesize pointerView=_pointerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftTitleConstraint;              //@synthesize leftTitleConstraint=_leftTitleConstraint - In the implementation block
@property (assign,nonatomic) double maxWidthForNames;                               //@synthesize maxWidthForNames=_maxWidthForNames - In the implementation block
@property (nonatomic,readonly) NSArray * imageViews;                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) NSArray * sortedPeople;                                //@synthesize sortedPeople=_sortedPeople - In the implementation block
+(id)placeholderImage;
+(id)faceCropImageView;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateTitleLabel;
-(NSArray *)imageViews;
-(void)manager:(id)arg1 didFindFaceCrop:(id)arg2 forClip:(id)arg3 usingPersonName:(id)arg4 ;
-(void)manager:(id)arg1 failedToFindFaceCropForPersonName:(id)arg2 ;
-(id)faceCropImageViews;
-(UIView *)pointerView;
-(void)setSortedPeople:(NSArray *)arg1 ;
-(NSArray *)sortedPeople;
-(void)resizeWithMaxWidth:(double)arg1 ;
-(double)maxWidthForNames;
-(NSLayoutConstraint *)leftTitleConstraint;
-(void)setMaxWidthForNames:(double)arg1 ;
-(void)updateWithPersonEvents:(id)arg1 forCameraClip:(id)arg2 ;
-(void)setPointerView:(UIView *)arg1 ;
-(void)setLeftTitleConstraint:(NSLayoutConstraint *)arg1 ;
@end

