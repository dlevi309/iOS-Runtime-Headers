/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
*/


@class NSMutableDictionary;

@interface SYDJournal : NSObject {

	NSMutableDictionary* _store;
	NSMutableDictionary* _journal;
	BOOL _readonly;

}
-(id)initWithMutableStore:(id)arg1 ;
-(id)changesSinceChangeCount:(long long)arg1 ;
-(id)init;
-(id)initWithStore:(id)arg1 ;
-(id)description;
-(void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3 ;
-(long long)maximumChangeCount;
-(int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)removeChangesUntilChangeCount:(long long)arg1 ;
@end

