/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSTCellRegion, NSHashTable;

@interface TSTChangeDescriptor : NSObject {

	int mChangeDescriptor;
	TSTCellRegion* mCellRegion;
	SCD_Struct_TS140 mCellID;
	TSTCellRegion* mExpandedRegion;
	TSTCellRegion* mStrokeRegion;
	NSHashTable* mReferenceIdentifiers;

}

@property (nonatomic,readonly) int changeDescriptor; 
@property (nonatomic,readonly) TSTCellRegion * cellRegion; 
@property (nonatomic,readonly) SCD_Struct_TS140 cellID; 
@property (nonatomic,readonly) TSTCellRegion * strokeRegion; 
@property (nonatomic,retain) TSTCellRegion * expandedRegion; 
@property (nonatomic,readonly) NSHashTable * referenceIdentifiers; 
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS140)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS140)arg2 cellRange:(SCD_Struct_TS142)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS140)arg2 cellRange:(SCD_Struct_TS142)arg3 strokeRange:(SCD_Struct_TS142)arg4 ;
+(id)changeDescriptorWithType:(int)arg1 cellID:(SCD_Struct_TS140)arg2 strokeRange:(SCD_Struct_TS142)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(SCD_Struct_TS142)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 strokeRange:(SCD_Struct_TS142)arg2 ;
+(id)changeDescriptorWithType:(int)arg1 cellRange:(SCD_Struct_TS142)arg2 strokeRange:(SCD_Struct_TS142)arg3 ;
+(id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(TSTCellRegion *)cellRegion;
-(SCD_Struct_TS142)cellRange;
-(int)changeDescriptor;
-(SCD_Struct_TS140)cellID;
-(id)initWithChangeDescriptorType:(int)arg1 andCellRegion:(id)arg2 andCellID:(SCD_Struct_TS140)arg3 andStrokeRegion:(id)arg4 andReferenceIdentifiers:(id)arg5 ;
-(TSTCellRegion *)strokeRegion;
-(TSTCellRegion *)expandedRegion;
-(SCD_Struct_TS142)strokeRange;
-(void)setExpandedRange:(SCD_Struct_TS142)arg1 ;
-(SCD_Struct_TS142)expandedRange;
-(void)setExpandedRegion:(TSTCellRegion *)arg1 ;
-(NSHashTable *)referenceIdentifiers;
@end

