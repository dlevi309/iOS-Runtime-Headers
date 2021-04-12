/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryOffsets.h>
@class NSSet;


@protocol _UICollectionLayoutAuxillaryOffsets <NSObject>
@property (nonatomic,readonly) NSSet * elementKinds; 
@required
-(NSSet *)elementKinds;
-(id)offsetsByApplyingOffsets:(id)arg1;
-(NSRange*)rangeForElementKind:(id)arg1;
-(id)indexesForElementKind:(id)arg1;
-(id)offsetsByRebasingOnOffsets:(id)arg1;
-(long long)offsetForElementKind:(id)arg1;
-(BOOL)overlapsOffsets:(id)arg1;
-(BOOL)containsIndex:(long long)arg1 forElementKind:(id)arg2;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSMutableDictionary, NSString;

@interface _UICollectionLayoutAuxillaryOffsets : NSObject <_UICollectionLayoutAuxillaryOffsets, NSCopying> {

	NSMutableDictionary* _offsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * elementKinds; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)elementKinds;
-(id)offsetsByApplyingOffsets:(id)arg1 ;
-(NSRange)rangeForElementKind:(id)arg1 ;
-(id)initWithOffsets:(id)arg1 ;
-(void)_offsetWithOffsets:(id)arg1 applyingBase:(BOOL)arg2 ;
-(id)indexesForElementKind:(id)arg1 ;
-(id)offsetsByRebasingOnOffsets:(id)arg1 ;
-(long long)offsetForElementKind:(id)arg1 ;
-(BOOL)overlapsOffsets:(id)arg1 ;
-(BOOL)containsIndex:(long long)arg1 forElementKind:(id)arg2 ;
-(void)setRange:(NSRange)arg1 forElementKind:(id)arg2 ;
-(void)setIndexes:(id)arg1 forElementKind:(id)arg2 ;
-(void)addIndexes:(id)arg1 forElementKind:(id)arg2 ;
-(void)incrementCountsFromOffsets:(id)arg1 ;
-(void)incrementCountForElementKind:(id)arg1 ;
@end

