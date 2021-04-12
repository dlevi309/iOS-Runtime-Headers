/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage;

@interface TSKCenterTilingButton : UIButton {

	UIImage* mLeftCapImage_Normal;
	UIImage* mLeftCapImage_Disabled;
	UIImage* mLeftCapImage_Active;
	UIImage* mLeftCapImage_Selected;
	UIImage* mLeftCapImage_ActiveSelected;
	UIImage* mRightCapImage_Normal;
	UIImage* mRightCapImage_Disabled;
	UIImage* mRightCapImage_Active;
	UIImage* mRightCapImage_Selected;
	UIImage* mRightCapImage_ActiveSelected;
	UIImage* mCenterTileImage_Normal;
	UIImage* mCenterTileImage_Disabled;
	UIImage* mCenterTileImage_Active;
	UIImage* mCenterTileImage_Selected;
	UIImage* mCenterTileImage_ActiveSelected;
	UIImage* mLeftCenterTileImage_Normal;
	UIImage* mLeftCenterTileImage_Disabled;
	UIImage* mLeftCenterTileImage_Active;
	UIImage* mLeftCenterTileImage_Selected;
	UIImage* mLeftCenterTileImage_ActiveSelected;
	UIImage* mRightCenterTileImage_Normal;
	UIImage* mRightCenterTileImage_Disabled;
	UIImage* mRightCenterTileImage_Active;
	UIImage* mRightCenterTileImage_Selected;
	UIImage* mRightCenterTileImage_ActiveSelected;
	int mTilingType;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)p_resetBackgroundImageForState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andTilingType:(int)arg2 ;
-(id)leftCapImageForState:(unsigned long long)arg1 ;
-(id)rightCapImageForState:(unsigned long long)arg1 ;
-(id)centerTileImageForState:(unsigned long long)arg1 ;
-(id)leftCenterTileImageForState:(unsigned long long)arg1 ;
-(id)rightCenterTileImageForState:(unsigned long long)arg1 ;
-(void)p_tileButtedToCapLtoR:(id)arg1 inRect:(CGRect)arg2 ;
-(void)p_tileButtedToCapRtoL:(id)arg1 inRect:(CGRect)arg2 ;
-(void)p_tileHorizCenterOutwardwithLeft:(id)arg1 andRight:(id)arg2 inRect:(CGRect)arg3 ;
-(void)p_tileSimple:(id)arg1 inRect:(CGRect)arg2 ;
-(void)setLeftCapImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRightCapImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setCenterTileImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setLeftCenterTileImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setRightCenterTileImage:(id)arg1 forState:(unsigned long long)arg2 ;
@end

