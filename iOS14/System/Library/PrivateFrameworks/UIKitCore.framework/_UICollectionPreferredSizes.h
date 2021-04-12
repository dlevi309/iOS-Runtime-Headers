/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionPreferredSizes.h>
@class NSIndexSet, NSSet;


@protocol _UICollectionPreferredSizes <NSObject>
@property (nonatomic,readonly) NSIndexSet * indexes; 
@property (nonatomic,readonly) NSSet * elementKinds; 
@required
-(id)objectForKeyedSubscript:(id)arg1;
-(id)objectAtIndexedSubscript:(long long)arg1;
-(NSSet *)elementKinds;
-(id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2;
-(BOOL)hasSizes;
-(BOOL)containsSupplementaryOffsets:(id)arg1;
-(NSIndexSet *)indexes;

@end

#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionLayoutAuxillaryOffsets;
@class NSIndexSet, NSSet, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface _UICollectionPreferredSizes : NSObject <_UICollectionPreferredSizes, NSCopying> {

	NSMutableDictionary* _sizes;
	NSMutableIndexSet* _indexes;
	NSMutableDictionary* _supplementarySizesDict;
	long long _frameOffset;
	id<_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;

}

@property (assign,nonatomic) long long frameOffset;                                                         //@synthesize frameOffset=_frameOffset - In the implementation block
@property (nonatomic,retain) id<_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets;              //@synthesize supplementaryBaseOffsets=_supplementaryBaseOffsets - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexes; 
@property (nonatomic,readonly) NSSet * elementKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(long long)arg1 ;
-(void)setFrameOffset:(long long)arg1 ;
-(NSSet *)elementKinds;
-(long long)frameOffset;
-(id)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id)arg2 ;
-(id<_UICollectionLayoutAuxillaryOffsets>)supplementaryBaseOffsets;
-(id)initWithSizes:(id)arg1 indexes:(id)arg2 supplementarySizesDict:(id)arg3 frameOffset:(long long)arg4 supplementaryBaseOffsets:(id)arg5 ;
-(BOOL)hasSizes;
-(NSString *)description;
-(void)addPreferredSize:(id)arg1 forSupplementaryWithElementKind:(id)arg2 atIndex:(long long)arg3 ;
-(void)setSupplementaryBaseOffsets:(id<_UICollectionLayoutAuxillaryOffsets>)arg1 ;
-(BOOL)containsSupplementaryOffsets:(id)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2 ;
-(NSIndexSet *)indexes;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

