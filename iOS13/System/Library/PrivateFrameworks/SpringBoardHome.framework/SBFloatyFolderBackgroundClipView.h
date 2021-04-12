/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class SBFolderBackgroundView;

@interface SBFloatyFolderBackgroundClipView : UIView {

	SBFolderBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) SBFolderBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundEffect; 
@property (assign,nonatomic) double cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(SBFolderBackgroundView *)backgroundView;
-(void)layoutSubviews;
-(double)cornerRadius;
-(unsigned long long)backgroundEffect;
-(void)setBackgroundEffect:(unsigned long long)arg1 ;
@end

