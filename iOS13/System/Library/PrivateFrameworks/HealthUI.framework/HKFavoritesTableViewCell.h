/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFavorited:(BOOL)arg1 ;
-(BOOL)isFavorited;
@end

