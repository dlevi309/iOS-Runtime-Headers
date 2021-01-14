/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface PUSearchResultsIndexingProgressView : UIView {

	UILabel* _indexingLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * indexingLabel;                                  //@synthesize indexingLabel=_indexingLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)contentSizeCategoryChanged;
-(UILabel *)indexingLabel;
-(void)setIndexingLabel:(UILabel *)arg1 ;
@end

