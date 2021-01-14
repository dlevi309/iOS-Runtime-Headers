/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosGridCell.h>

@class UILabel, NSString, UIColor;

@interface PUCurationClassificationSignalAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {

	UILabel* _scoreLabel;
	NSString* _score;
	UIColor* _color;

}

@property (nonatomic,copy) NSString * score;              //@synthesize score=_score - In the implementation block
@property (nonatomic,copy) UIColor * color;               //@synthesize color=_color - In the implementation block
-(NSString *)score;
-(UIColor *)color;
-(void)setScore:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
@end

