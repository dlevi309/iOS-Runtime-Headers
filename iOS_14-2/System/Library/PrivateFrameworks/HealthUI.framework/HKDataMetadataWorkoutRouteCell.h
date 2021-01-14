/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIActivityIndicatorView, NSLayoutConstraint;

@interface HKDataMetadataWorkoutRouteCell : UITableViewCell {

	UIImageView* _routeImageView;
	UIActivityIndicatorView* _activityIndicator;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIImageView * routeImageView;                             //@synthesize routeImageView=_routeImageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                    //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(id)init;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setupConstraints;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)routeImageView;
-(void)setRouteImage:(id)arg1 ;
-(void)setRouteImageView:(UIImageView *)arg1 ;
@end

