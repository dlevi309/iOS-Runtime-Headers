/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <ShareSheet/UIAirDropGroupActivityCell.h>

@class UIView, SFMagicHeadWheelView, NSArray;

@interface _UIMagicHeadCollectionViewCell : UIAirDropGroupActivityCell {

	UIView* _magicHeadView;
	SFMagicHeadWheelView* _magicHeadWheelView;
	NSArray* _regularMHConstraints;
	NSArray* _largeTextMHConstraints;

}

@property (nonatomic,retain) NSArray * regularMHConstraints;                         //@synthesize regularMHConstraints=_regularMHConstraints - In the implementation block
@property (nonatomic,retain) NSArray * largeTextMHConstraints;                       //@synthesize largeTextMHConstraints=_largeTextMHConstraints - In the implementation block
@property (nonatomic,retain) UIView * magicHeadView;                                 //@synthesize magicHeadView=_magicHeadView - In the implementation block
@property (nonatomic,retain) SFMagicHeadWheelView * magicHeadWheelView;              //@synthesize magicHeadWheelView=_magicHeadWheelView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateDarkening;
-(void)setMagicHeadView:(UIView *)arg1 ;
-(UIView *)magicHeadView;
-(void)setupConstraintsYukonMH;
-(void)setLargeTextMHConstraints:(NSArray *)arg1 ;
-(void)setRegularMHConstraints:(NSArray *)arg1 ;
-(NSArray *)largeTextMHConstraints;
-(NSArray *)regularMHConstraints;
-(void)_updateMHForCurrentSizeCategory;
-(SFMagicHeadWheelView *)magicHeadWheelView;
-(void)setMagicHeadWheelView:(SFMagicHeadWheelView *)arg1 ;
@end

