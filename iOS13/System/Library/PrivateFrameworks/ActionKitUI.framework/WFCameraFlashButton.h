/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, UILabel, UIImageView;

@interface WFCameraFlashButton : UIControl {

	BOOL _expanded;
	BOOL _needsHiding;
	NSArray* _labels;
	UILabel* _selectedLabel;
	UIImageView* _flashView;

}

@property (nonatomic,retain) NSArray * labels;                            //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) UILabel * selectedLabel;                     //@synthesize selectedLabel=_selectedLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * flashView;              //@synthesize flashView=_flashView - In the implementation block
@property (assign,nonatomic) BOOL expanded;                               //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL needsHiding;                            //@synthesize needsHiding=_needsHiding - In the implementation block
@property (assign,nonatomic) long long flashMode; 
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(UILabel *)selectedLabel;
-(void)setSelectedLabel:(UILabel *)arg1 ;
-(UIImageView *)flashView;
-(void)setFlashView:(UIImageView *)arg1 ;
-(BOOL)needsHiding;
-(void)setNeedsHiding:(BOOL)arg1 ;
@end

