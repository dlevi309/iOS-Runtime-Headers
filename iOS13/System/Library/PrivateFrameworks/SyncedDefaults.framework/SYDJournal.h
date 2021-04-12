/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/


@class NSMutableDictionary;

@interface SYDJournal : NSObject {

	NSMutableDictionary* _store;
	NSMutableDictionary* _journal;
	BOOL _readonly;

}
-(id)init;
-(id)description;
-(id)initWithStore:(id)arg1 ;
-(id)changesSinceChangeCount:(long long)arg1 ;
-(long long)maximumChangeCount;
-(id)initWithMutableStore:(id)arg1 ;
-(void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3 ;
-(int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)removeChangesUntilChangeCount:(long long)arg1 ;
@end

