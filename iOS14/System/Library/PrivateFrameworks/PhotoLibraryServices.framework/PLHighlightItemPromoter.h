/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItemPromoterRule;
@interface PLHighlightItemPromoter : NSObject {

	id<PLHighlightItemPromoterRule> _rule;

}

@property (nonatomic,readonly) id<PLHighlightItemPromoterRule> rule;              //@synthesize rule=_rule - In the implementation block
-(id<PLHighlightItemPromoterRule>)rule;
-(id)initWithRule:(id)arg1 ;
-(void)processHighlightItemsInHighlightItemList:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end

