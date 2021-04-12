/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UICollectionView;

@interface LUILogLocatorView : UIView {

	UIButton* _upArrowButton;
	UIButton* _downArrowButton;
	UIButton* _screenshotButton;
	UICollectionView* _screenshotCollectionView;

}

@property (nonatomic,retain) UIButton * upArrowButton;                                 //@synthesize upArrowButton=_upArrowButton - In the implementation block
@property (nonatomic,retain) UIButton * downArrowButton;                               //@synthesize downArrowButton=_downArrowButton - In the implementation block
@property (nonatomic,retain) UIButton * screenshotButton;                              //@synthesize screenshotButton=_screenshotButton - In the implementation block
@property (nonatomic,retain) UICollectionView * screenshotCollectionView;              //@synthesize screenshotCollectionView=_screenshotCollectionView - In the implementation block
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_createButtonWithImageName:(id)arg1 ;
-(id)_createScreenshotCollectionView;
-(UIButton *)downArrowButton;
-(UIButton *)upArrowButton;
-(UIButton *)screenshotButton;
-(UICollectionView *)screenshotCollectionView;
-(void)handleOrientationChange:(long long)arg1 ;
-(id)_createElementStackViewWithElements:(id)arg1 ;
-(void)setUpArrowButton:(UIButton *)arg1 ;
-(void)setDownArrowButton:(UIButton *)arg1 ;
-(void)setScreenshotButton:(UIButton *)arg1 ;
-(void)setScreenshotCollectionView:(UICollectionView *)arg1 ;
@end

