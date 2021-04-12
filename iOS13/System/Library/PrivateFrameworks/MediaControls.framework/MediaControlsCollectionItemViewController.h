/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

@class UIView;


@protocol MediaControlsCollectionItemViewController <NSObject>
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@required
-(BOOL)isSelected;
-(UIView *)contentView;
-(UIView *)backgroundView;
-(void)setSelected:(BOOL)arg1;
-(void)setBackgroundView:(id)arg1;
-(void)willTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2;

@end

