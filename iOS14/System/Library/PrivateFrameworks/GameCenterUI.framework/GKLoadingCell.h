/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIActivityIndicatorView, UILabel;

@interface GKLoadingCell : UICollectionViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _loading;

}

@property (nonatomic,retain) UILabel * loading;                                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(void)setLoading:(UILabel *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)loading;
-(void)awakeFromNib;
@end

