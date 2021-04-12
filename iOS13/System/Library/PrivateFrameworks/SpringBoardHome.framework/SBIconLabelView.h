/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

@class SBIconView, UIImage, SBIconLabelImageParameters;


@protocol SBIconLabelView
@property (assign,nonatomic,__weak) SBIconView * iconView; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) SBIconLabelImageParameters * imageParameters; 
@required
-(id)initWithSettings:(id)arg1;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(SBIconLabelImageParameters *)imageParameters;
-(SBIconView *)iconView;
-(void)setIconView:(id)arg1;
-(void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;

@end

