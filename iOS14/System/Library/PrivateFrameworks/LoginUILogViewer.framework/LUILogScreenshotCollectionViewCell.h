/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, UIButton;

@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell {

	UIImageView* _screenshotImageView;
	UILabel* _screenshotDateLabel;
	UIButton* _clearButton;
	/*^block*/id _clearButtonAction;

}

@property (nonatomic,readonly) UIImageView * screenshotImageView;              //@synthesize screenshotImageView=_screenshotImageView - In the implementation block
@property (nonatomic,readonly) UILabel * screenshotDateLabel;                  //@synthesize screenshotDateLabel=_screenshotDateLabel - In the implementation block
@property (nonatomic,readonly) UIButton * clearButton;                         //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,copy) id clearButtonAction;                               //@synthesize clearButtonAction=_clearButtonAction - In the implementation block
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)clearButton;
-(UIImageView *)screenshotImageView;
-(UILabel *)screenshotDateLabel;
-(void)setClearButtonAction:(id)arg1 ;
-(id)_createClearButton;
-(void)clearButtonTapped:(id)arg1 ;
-(id)_createScreenshotImageView;
-(id)_createScreenshotDateLabel;
-(id)clearButtonAction;
@end

