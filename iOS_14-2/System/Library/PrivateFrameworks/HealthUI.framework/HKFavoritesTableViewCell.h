/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface HKFavoritesTableViewCell : UITableViewCell {

	UIImageView* _star;
	UIImageView* _filledStar;

}

@property (assign,getter=isFavorited,nonatomic) BOOL favorited; 
+(id)reuseIdentifier;
-(BOOL)isFavorited;
-(void)setFavorited:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

