/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

