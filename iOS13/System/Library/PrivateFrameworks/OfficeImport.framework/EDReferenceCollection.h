/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection {

	BOOL mCoalesce;

}
+(id)noCoalesceCollection;
+(id)coalesceCollection;
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)coalesce;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)reverseReferencesByRow:(BOOL)arg1 ;
-(void)coalesceProgressiveCellReferencesCollection;
-(id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(BOOL)arg2 ;
-(id)initWihNoCoalesce;
-(BOOL)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2 ;
@end

