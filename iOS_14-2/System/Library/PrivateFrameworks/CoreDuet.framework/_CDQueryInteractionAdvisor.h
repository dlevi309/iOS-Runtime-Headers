/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject {

	_CDInteractionStore* _store;

}

@property (retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
-(id)initWithStore:(id)arg1 ;
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
@end

