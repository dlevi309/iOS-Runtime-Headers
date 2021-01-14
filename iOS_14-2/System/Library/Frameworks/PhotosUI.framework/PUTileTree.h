/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying> {

	BOOL _useUniqueLeafs;
	NSMutableDictionary* __objectsByTileIdentifier;

}

@property (nonatomic,readonly) NSMutableDictionary * _objectsByTileIdentifier;              //@synthesize _objectsByTileIdentifier=__objectsByTileIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL useUniqueLeafs;                                         //@synthesize useUniqueLeafs=_useUniqueLeafs - In the implementation block
-(id)init;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addObject:(id)arg1 withTileIdentifier:(id)arg2 ;
-(id)initUsingUniqueLeafs:(BOOL)arg1 ;
-(id)description;
-(void)removeObject:(id)arg1 withTileIdentifier:(id)arg2 ;
-(void)removeAllObjects;
-(BOOL)containsObject:(id)arg1 withTileIdentifier:(id)arg2 ;
-(void)enumerateObjectsWithTileIdentifier:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectWithTileIdentifier:(id)arg1 ;
-(void)removeObjectWithTileIdentifier:(id)arg1 ;
-(BOOL)useUniqueLeafs;
-(NSMutableDictionary *)_objectsByTileIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTileTree:(id)arg1 ;
@end

