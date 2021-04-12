/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleValueCell.h>

@class UIImageView, NSArray;

@interface HUMediaServiceTitleValueCell : HUTitleValueCell {

	BOOL _iconImageLoadingInProgress;
	UIImageView* _serviceIconView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIImageView * serviceIconView;              //@synthesize serviceIconView=_serviceIconView - In the implementation block
@property (assign) BOOL iconImageLoadingInProgress;                      //@synthesize iconImageLoadingInProgress=_iconImageLoadingInProgress - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                      //@synthesize constraints=_constraints - In the implementation block
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_loadServiceIconImage;
-(BOOL)iconImageLoadingInProgress;
-(void)setIconImageLoadingInProgress:(BOOL)arg1 ;
-(void)_updateContentMetrics;
-(UIImageView *)serviceIconView;
-(void)setServiceIconView:(UIImageView *)arg1 ;
@end

