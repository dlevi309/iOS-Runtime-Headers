/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryOffsets.h>
@class NSSet;


@protocol _UICollectionLayoutAuxillaryOffsets <NSObject>
@property (nonatomic,readonly) NSSet * elementKinds; 
@required
-(NSSet *)elementKinds;
-(id)offsetsByRebasingOnOffsets:(id)arg1;
-(id)indexesForElementKind:(id)arg1;
-(NSRange*)rangeForElementKind:(id)arg1;
-(BOOL)containsIndex:(long long)arg1 forElementKind:(id)arg2;
-(BOOL)overlapsOffsets:(id)arg1;
-(long long)offsetForElementKind:(id)arg1;
-(id)offsetsByApplyingOffsets:(id)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutAuxillaryOffsets : NSObject <_UICollectionLayoutAuxillaryOffsets, NSCopying> {

	NSMutableDictionary* _offsets;

}

@property (nonatomic,readonly) NSSet * elementKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_offsetWithOffsets:(id)arg1 applyingBase:(BOOL)arg2 ;
-(NSSet *)elementKinds;
-(void)addIndexes:(id)arg1 forElementKind:(id)arg2 ;
-(void)setRange:(NSRange)arg1 forElementKind:(id)arg2 ;
-(id)offsetsByRebasingOnOffsets:(id)arg1 ;
-(id)indexesForElementKind:(id)arg1 ;
-(NSString *)description;
-(NSRange)rangeForElementKind:(id)arg1 ;
-(id)initWithOffsets:(id)arg1 ;
-(void)incrementCountsFromOffsets:(id)arg1 ;
-(void)incrementCountForElementKind:(id)arg1 ;
-(void)setIndexes:(id)arg1 forElementKind:(id)arg2 ;
-(BOOL)containsIndex:(long long)arg1 forElementKind:(id)arg2 ;
-(BOOL)overlapsOffsets:(id)arg1 ;
-(long long)offsetForElementKind:(id)arg1 ;
-(id)offsetsByApplyingOffsets:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

