/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithMap:(id)arg1 ;
-(void)enumerateSelectorsAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forSelector:(SEL)arg2 ;
-(void)removeObjectForSelector:(SEL)arg1 ;
-(id)initWithMapping:(/*^block*/id)arg1 objects:(id)arg2 ;
-(_UISelectorSet *)allSelectors;
-(id)objectForSelector:(SEL)arg1 ;
-(void)removeObjectsForSelectors:(id)arg1 ;
@end

