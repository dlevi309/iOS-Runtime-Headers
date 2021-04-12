/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setupConstraints;
-(UIImageView *)routeImageView;
-(void)setRouteImage:(id)arg1 ;
-(void)setRouteImageView:(UIImageView *)arg1 ;
@end

