/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable, _UISelectorSet, NSArray;

@interface _UISelectorDictionary : NSObject <NSCopying> {

	NSMapTable* _map;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) _UISelectorSet * allSelectors; 
@property (nonatomic,readonly) NSArray * allObjects; 
-(id)init;
-(id)objectForSelector:(SEL)arg1 ;
-(id)initWithMapping:(/*^block*/id)arg1 objects:(id)arg2 ;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)description;
-(void)enumerateSelectorsAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObjectForSelector:(SEL)arg1 ;
-(_UISelectorSet *)allSelectors;
-(unsigned long long)hash;
-(id)initWithMap:(id)arg1 ;
-(void)removeObjectsForSelectors:(id)arg1 ;
-(void)setObject:(id)arg1 forSelector:(SEL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

