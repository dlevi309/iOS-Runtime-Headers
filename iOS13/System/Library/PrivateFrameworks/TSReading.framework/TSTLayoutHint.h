/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDHint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, TSTLayout, NSString;

@interface TSTLayoutHint : NSObject <TSDHint, NSSecureCoding> {

	BOOL mIsValid;
	BOOL mHorizontal;
	SCD_Struct_TS141 mCellRange;
	SCD_Struct_TS140 mCacheHintID;
	NSNumber* mPartitioningPass;
	unsigned mPartitionPosition;
	CGSize mMaximumSize;
	CGSize mEffectiveSize;
	TSTLayout* mLayout;

}

@property (assign,nonatomic) BOOL isValid; 
@property (assign,nonatomic) SCD_Struct_TS142 cellRange; 
@property (assign,nonatomic) SCD_Struct_TS140 cacheHintID; 
@property (nonatomic,retain) NSNumber * partitioningPass; 
@property (assign,nonatomic) unsigned partitionPosition; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) CGSize effectiveSize; 
@property (assign,nonatomic) TSTLayout * layout; 
@property (assign,nonatomic) BOOL horizontal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)archivedHintClass;
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(NSString *)description;
-(void)invalidate;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)maximumSize;
-(TSTLayout *)layout;
-(void)setLayout:(TSTLayout *)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(BOOL)horizontal;
-(void)setHorizontal:(BOOL)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)overlapsWithSelection:(id)arg1 ;
-(void)offsetByDelta:(int)arg1 ;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;
-(BOOL)isFirstHint;
-(CGSize)effectiveSize;
-(SCD_Struct_TS142)cellRange;
-(void)setCellRange:(SCD_Struct_TS142)arg1 ;
-(void)setCacheHintID:(SCD_Struct_TS140)arg1 ;
-(void)setPartitionPosition:(unsigned)arg1 ;
-(SCD_Struct_TS140)cacheHintID;
-(unsigned)partitionPosition;
-(void)setPartitioningPass:(NSNumber *)arg1 ;
-(NSNumber *)partitioningPass;
-(id)initWithRange:(SCD_Struct_TS142)arg1 hintId:(SCD_Struct_TS140)arg2 partitionPosition:(unsigned)arg3 maximumSize:(CGSize)arg4 effectiveSize:(CGSize)arg5 layout:(id)arg6 validity:(BOOL)arg7 horizontal:(BOOL)arg8 ;
-(void)setEffectiveSize:(CGSize)arg1 ;
@end

