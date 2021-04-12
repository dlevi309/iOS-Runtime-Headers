/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/SBIconLabelView.h>

@class SBIconView, UIImage, SBIconLabelImageParameters;

@interface SBIconSimpleLabelView : UIImageView <SBIconLabelView> {

	SBIconView* _iconView;

}

@property (assign,nonatomic,__weak) SBIconView * iconView;                                //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) SBIconLabelImageParameters * imageParameters; 
-(id)initWithSettings:(id)arg1 ;
-(SBIconLabelImageParameters *)imageParameters;
-(SBIconView *)iconView;
-(void)setIconView:(SBIconView *)arg1 ;
-(void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2 ;
@end

