/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libMemoryResourceException.dylib/FPProcessGroupMinimal.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying> {

	unsigned _categoriesRefcount;
	NSMutableArray* _objects;
	NSDictionary* _categories;

}

@property (nonatomic,retain) NSDictionary * categories;                //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned categoriesRefcount;              //@synthesize categoriesRefcount=_categoriesRefcount - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                 //@synthesize objects=_objects - In the implementation block
-(NSMutableArray *)objects;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(void)setCategories:(NSDictionary *)arg1 ;
-(NSDictionary *)categories;
-(void)addObject:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)consumeCachedCategories;
-(void)attachCachedCategories:(id)arg1 refcount:(unsigned)arg2 ;
-(unsigned)categoriesRefcount;
-(void)setCategoriesRefcount:(unsigned)arg1 ;
@end

