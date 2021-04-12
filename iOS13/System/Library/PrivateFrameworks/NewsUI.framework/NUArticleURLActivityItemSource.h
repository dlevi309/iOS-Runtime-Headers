/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource {

	NSURL* _articleURL;

}

@property (nonatomic,readonly) NSURL * articleURL;              //@synthesize articleURL=_articleURL - In the implementation block
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSURL *)articleURL;
-(id)bodyStringForMailMessage;
-(id)initWithHeadline:(id)arg1 URLModifier:(id)arg2 ;
@end

