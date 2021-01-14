/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDataSection.h>

@protocol NSFastEnumeration;
@class NSArray, NSIndexSet, NSDictionary, NSEnumerator;

@interface PXStackedDataSection : PXDataSection {

	NSArray* _childDataSectionsStartIndexes;
	NSIndexSet* _nonEmptyChildDataSectionsStartIndexSet;
	NSDictionary* _nonEmptyChildDataSectionsIndexMap;
	NSEnumerator* _childDataSectionsEnumerator;
	id<NSFastEnumeration> _currentEnumerator;
	unsigned long long _enumerationMutations;
	unsigned long long* _currentEnumeratorMutationsPtr;
	long long _count;
	NSArray* _childDataSections;

}

@property (nonatomic,copy,readonly) NSArray * childDataSections;              //@synthesize childDataSections=_childDataSections - In the implementation block
+(id)dataSectionForAssetsInCollections:(id)arg1 ;
-(NSArray *)childDataSections;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PX44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)debugDescription;
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)initWithChildDataSections:(id)arg1 outlineObject:(id)arg2 ;
-(long long)indexOfChildDataSourceForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(void)_resetEnumerationState:(SCD_Struct_PX44*)arg1 ;
-(long long)itemStartIndexForChildDataSourceAtIndex:(long long)arg1 ;
-(id)_nextEnumerator;
@end

