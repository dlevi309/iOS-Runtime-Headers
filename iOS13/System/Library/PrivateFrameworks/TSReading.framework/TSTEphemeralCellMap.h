/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSTCellMap.h>

@class NSString;

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {

	SCD_Struct_TS140* mCellIDs;
	id* mCells;
	unsigned long long mCapacity;
	unsigned long long mCount;
	BOOL mMayModifyValuesReferencedByFormulas;
	BOOL mIgnoreHiddenCellsWhenApplying;
	BOOL mAppliesToHidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL appliesToHidden; 
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS140)arg2 ;
-(BOOL)containsCellID:(SCD_Struct_TS140)arg1 ;
-(void)popLastCell;
-(SCD_Struct_TS140*)cellIDs;
-(SCD_Struct_TS140)cellIDAtIndex:(unsigned long long)arg1 ;
-(id)cellAtIndex:(unsigned long long)arg1 ;
-(BOOL)mayModifyFormulasInCells;
-(BOOL)mayModifyValuesReferencedByFormulas;
-(void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1 ;
-(BOOL)appliesToHidden;
-(void)setAppliesToHidden:(BOOL)arg1 ;
@end

