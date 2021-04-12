/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItemClustererRule;
@interface PLHighlightItemClusterer : NSObject {

	id<PLHighlightItemClustererRule> _rule;

}

@property (nonatomic,readonly) id<PLHighlightItemClustererRule> rule;              //@synthesize rule=_rule - In the implementation block
-(void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(/*^block*/id)arg4 restoreBlock:(/*^block*/id)arg5 ;
-(id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id<PLHighlightItemClustererRule>)rule;
-(id)initWithRule:(id)arg1 ;
@end

