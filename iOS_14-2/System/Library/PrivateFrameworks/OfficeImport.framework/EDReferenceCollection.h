/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDCollection.h>

@interface EDReferenceCollection : EDCollection {

	BOOL mCoalesce;

}
+(id)noCoalesceCollection;
+(id)coalesceCollection;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)addObject:(id)arg1 ;
-(void)coalesce;
-(unsigned long long)countOfCellsBeingReferenced;
-(id)reverseReferencesByRow:(BOOL)arg1 ;
-(void)coalesceProgressiveCellReferencesCollection;
-(id)referenceToCellWithIndex:(unsigned long long)arg1 byRow:(BOOL)arg2 ;
-(id)initWihNoCoalesce;
-(BOOL)coalesceReferenceAtIndex1:(unsigned long long)arg1 index2:(unsigned long long)arg2 ;
@end

