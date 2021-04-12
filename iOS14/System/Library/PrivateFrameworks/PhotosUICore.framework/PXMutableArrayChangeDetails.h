/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXArrayChangeDetails.h>

@interface PXMutableArrayChangeDetails : PXArrayChangeDetails {

	BOOL _isNonIncremental;

}
+(BOOL)_mutableCopyInputs;
+(id)changeDetailsWithNoIncrementalChanges;
-(void)_addAdditionalRemovedIndexSet:(id)arg1 afterChangesIndex:(id)arg2 ;
-(void)_addInsertedIndexes:(id)arg1 ;
-(void)_addRemovedIndex:(unsigned long long)arg1 ;
-(void)_updatePropertyChangesWithChangeDetails:(id)arg1 ;
-(void)_updateChangedIndexesWithChangeDetails:(id)arg1 ;
-(void)_addRemovedIndexes:(id)arg1 ;
-(BOOL)hasIncrementalChanges;
-(void)addChangeDetails:(id)arg1 ;
-(void)_becomeNonIncremental;
-(void)_updateMovesWithChangesDetails:(id)arg1 ;
-(void)_addAdditionalRemovedIndex:(unsigned long long)arg1 afterChangesIndex:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_addInsertedRange:(NSRange)arg1 ;
-(void)_removeInsertForRemovedIndexAfterChanges:(unsigned long long)arg1 ;
@end

