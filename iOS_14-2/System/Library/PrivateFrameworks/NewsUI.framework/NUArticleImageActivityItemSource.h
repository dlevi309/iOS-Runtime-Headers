/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NUArticleActivityItemSource.h>

@class UIImage;

@interface NUArticleImageActivityItemSource : NUArticleActivityItemSource {

	UIImage* _articleImage;

}

@property (nonatomic,readonly) UIImage * articleImage;              //@synthesize articleImage=_articleImage - In the implementation block
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)initWithHeadline:(id)arg1 ;
-(UIImage *)articleImage;
@end

