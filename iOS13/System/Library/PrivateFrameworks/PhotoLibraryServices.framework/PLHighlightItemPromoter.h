/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItemPromoterRule;
@interface PLHighlightItemPromoter : NSObject {

	id<PLHighlightItemPromoterRule> _rule;

}

@property (nonatomic,readonly) id<PLHighlightItemPromoterRule> rule;              //@synthesize rule=_rule - In the implementation block
-(id)initWithRule:(id)arg1 ;
-(void)processHighlightItemsInHighlightItemList:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id<PLHighlightItemPromoterRule>)rule;
@end

