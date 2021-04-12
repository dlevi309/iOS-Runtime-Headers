/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary;

@interface _UICompoundObjectMap : NSObject {

	NSMutableDictionary* _mapTable;

}
+(id)generateKeyForObject:(id)arg1 andProperty:(id)arg2 ;
+(id)compoundObjectMap;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3 ;
-(void)performWithEach:(/*^block*/id)arg1 ;
-(id)valueForObject:(id)arg1 andProperty:(id)arg2 ;
-(void)removeAllMappings;
-(id)deepCopy;
@end

