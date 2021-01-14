/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSArray, _UICollectionLayoutEdgeSpacing, NSString, _UICollectionLayoutSize;

@interface _UICollectionLayoutItem : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSArray* _supplementaryItems;
	NSArray* _decorationItems;
	_UICollectionLayoutEdgeSpacing* _edgeSpacing;
	NSString* _name;
	_UICollectionLayoutSize* _size;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) _UICollectionLayoutSize * size;                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                   //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) _UICollectionLayoutEdgeSpacing * edgeSpacing;              //@synthesize edgeSpacing=_edgeSpacing - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
+(id)itemWithSize:(id)arg1 decorationItems:(id)arg2 ;
+(id)itemWithSize:(id)arg1 ;
+(id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 ;
+(id)itemWithSize:(id)arg1 supplementaryItems:(id)arg2 ;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(id)initWithSize:(id)arg1 supplementaryItems:(id)arg2 decorationItems:(id)arg3 contentInsets:(NSDirectionalEdgeInsets)arg4 edgeSpacing:(id)arg5 name:(id)arg6 ;
-(void)setEdgeSpacing:(_UICollectionLayoutEdgeSpacing *)arg1 ;
-(_UICollectionLayoutEdgeSpacing *)edgeSpacing;
-(NSDirectionalEdgeInsets)contentInsets;
-(_UICollectionLayoutSize *)size;
-(NSString *)name;
-(id)_apiRepresentation;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

