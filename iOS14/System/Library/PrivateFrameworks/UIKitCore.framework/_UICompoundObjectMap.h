/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableDictionary;

@interface _UICompoundObjectMap : NSObject {

	NSMutableDictionary* _mapTable;

}
+(id)compoundObjectMap;
+(id)generateKeyForObject:(id)arg1 andProperty:(id)arg2 ;
-(id)init;
-(void)setValue:(id)arg1 forObject:(id)arg2 andProperty:(id)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)performWithEach:(/*^block*/id)arg1 ;
-(id)valueForObject:(id)arg1 andProperty:(id)arg2 ;
-(void)removeAllMappings;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)deepCopy;
@end

