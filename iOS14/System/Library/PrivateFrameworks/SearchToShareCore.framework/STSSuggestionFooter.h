/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface STSSuggestionFooter : UIView {

	UIImageView* _imageView;
	UIImage* _searchProviderImage;

}

@property (nonatomic,retain) UIImage * searchProviderImage;              //@synthesize searchProviderImage=_searchProviderImage - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)searchProviderImage;
-(void)setSearchProviderImage:(UIImage *)arg1 ;
@end

