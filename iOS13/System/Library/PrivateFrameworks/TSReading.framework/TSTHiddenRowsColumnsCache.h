/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTHiddenDimensionCache, NSIndexSet;

@interface TSTHiddenRowsColumnsCache : NSObject <NSCopying> {

	TSTHiddenDimensionCache* mHiddenRows;
	TSTHiddenDimensionCache* mHiddenColumns;

}

@property (nonatomic,readonly) NSIndexSet * visibleRowIndices; 
@property (nonatomic,readonly) NSIndexSet * visibleColumnIndices; 
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)swap;
-(void)validate:(id)arg1 ;
-(void)pop;
-(void)push;
-(BOOL)isRowHidden:(unsigned short)arg1 ;
-(BOOL)isRowUserHidden:(unsigned short)arg1 ;
-(BOOL)isColumnHidden:(unsigned char)arg1 ;
-(unsigned short)numberRowsHiddenInCellRange:(SCD_Struct_TS142)arg1 ;
-(unsigned short)numberRowsUserHiddenInCellRange:(SCD_Struct_TS142)arg1 ;
-(unsigned short)numberColumnsHiddenInCellRange:(SCD_Struct_TS142)arg1 ;
-(BOOL)anyRowsHiddenInCellRange:(SCD_Struct_TS142)arg1 ;
-(BOOL)anyRowsUserHiddenInCellRange:(SCD_Struct_TS142)arg1 ;
-(BOOL)anyColumnsHiddenInCellRange:(SCD_Struct_TS142)arg1 ;
-(unsigned short)previousVisibleRow:(unsigned short)arg1 ;
-(unsigned short)nextVisibleRow:(unsigned short)arg1 ;
-(unsigned char)previousVisibleColumn:(unsigned char)arg1 ;
-(unsigned char)nextVisibleColumn:(unsigned char)arg1 ;
-(unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2 ;
-(unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2 ;
-(SCD_Struct_TS140)visibleCellOffsetBy:(SCD_Struct_TS86)arg1 fromCellID:(SCD_Struct_TS140)arg2 ;
-(NSIndexSet *)visibleRowIndices;
-(NSIndexSet *)visibleColumnIndices;
-(unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1 ;
-(void)pushAndValidate:(id)arg1 ;
-(void)validateChangeDescriptors:(id)arg1 ;
@end

