/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject {

	CSSearchableIndex* _index;

}

@property (nonatomic,readonly) CSSearchableIndex * index;              //@synthesize index=_index - In the implementation block
+(id)defaultStore;
-(CSSearchableIndex *)index;
-(id)initWithSearchableIndex:(id)arg1 ;
-(void)setRelevantShortcuts:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

