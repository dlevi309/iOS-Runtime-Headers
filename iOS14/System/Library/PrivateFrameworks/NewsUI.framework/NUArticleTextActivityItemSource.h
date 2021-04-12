/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSString;

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource {

	NSString* _itemTitle;

}

@property (nonatomic,readonly) NSString * itemTitle;              //@synthesize itemTitle=_itemTitle - In the implementation block
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSString *)itemTitle;
-(id)initWithHeadline:(id)arg1 ;
@end

