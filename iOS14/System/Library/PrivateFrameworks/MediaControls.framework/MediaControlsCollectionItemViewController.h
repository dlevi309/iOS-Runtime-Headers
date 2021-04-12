/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

@class UIView;


@protocol MediaControlsCollectionItemViewController <NSObject>
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@required
-(void)setBackgroundView:(id)arg1;
-(UIView *)backgroundView;
-(void)willTransitionToSize:(CGSize)arg1 withCoordinator:(id)arg2;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(UIView *)contentView;

@end

