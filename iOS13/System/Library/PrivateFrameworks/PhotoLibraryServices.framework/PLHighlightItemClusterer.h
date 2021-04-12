/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItemClustererRule;
@interface PLHighlightItemClusterer : NSObject {

	id<PLHighlightItemClustererRule> _rule;

}

@property (nonatomic,readonly) id<PLHighlightItemClustererRule> rule;              //@synthesize rule=_rule - In the implementation block
-(id)initWithRule:(id)arg1 ;
-(id<PLHighlightItemClustererRule>)rule;
-(void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(/*^block*/id)arg4 restoreBlock:(/*^block*/id)arg5 ;
-(id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

