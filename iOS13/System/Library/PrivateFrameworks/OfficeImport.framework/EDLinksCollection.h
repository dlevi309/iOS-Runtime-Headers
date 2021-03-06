/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface EDLinksCollection : NSObject {

	NSMutableArray* mLinks;
	NSMutableArray* mReferences;

}
-(id)init;
-(id)description;
-(unsigned long long)addLink:(id)arg1 ;
-(id)referenceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)addReference:(id)arg1 ;
-(unsigned long long)referencesCount;
-(unsigned long long)linksCount;
-(id)linkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(unsigned long long)indexOfFirstLinkWithType:(int)arg1 ;
-(unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1 ;
-(unsigned long long)indexOfReference:(id)arg1 ;
-(BOOL)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long*)arg2 lastSheetIndex:(unsigned long long*)arg3 ;
-(unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2 ;
-(void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long*)arg2 nameIndex:(unsigned long long*)arg3 ;
@end

