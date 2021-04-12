/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {

	NSCountedSet* _countedKeys;
	NSMutableDictionary* _map;

}
-(id)init;
-(BOOL)containsKey:(id)arg1 ;
-(BOOL)containsValue:(id)arg1 ;
-(BOOL)checkinValue:(id)arg1 ;
-(id)checkoutValueForKey:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(void)checkinValues:(id)arg1 ;
@end

