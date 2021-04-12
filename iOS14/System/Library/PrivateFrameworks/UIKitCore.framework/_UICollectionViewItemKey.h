/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	NSString* _identifier;
	BOOL _isClone;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isClone;                                //@synthesize isClone=_isClone - In the implementation block
+(id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForCellWithIndexPath:(id)arg1 ;
+(id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForLayoutAttributes:(id)arg1 ;
-(id)copyAsClone:(BOOL)arg1 ;
-(NSIndexPath *)indexPath;
-(id)description;
-(BOOL)isClone;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4 ;
-(unsigned long long)hash;
-(id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

