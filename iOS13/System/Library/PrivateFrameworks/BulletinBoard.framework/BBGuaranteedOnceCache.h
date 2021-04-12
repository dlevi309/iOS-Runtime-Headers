/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@class NSMapTable;

@interface BBGuaranteedOnceCache : NSObject {

	NSMapTable* _guaranteedCache;
	NSMapTable* _bestEffortCache;

}
-(id)init;
-(void)removeObjectUsingKey:(id)arg1 ;
-(BOOL)attemptToGuaranteeObjectUsingKey:(id)arg1 ;
-(id)objectUsingKeyRemovingGuarantee:(id)arg1 ;
-(void)cacheObject:(id)arg1 usingKey:(id)arg2 ;
@end

