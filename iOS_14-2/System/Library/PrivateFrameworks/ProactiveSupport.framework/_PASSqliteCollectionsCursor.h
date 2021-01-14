/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASSqliteCollectionsCursor : NSObject {

	BOOL _foundOutputRow;
	BOOL _eof;
	id _collection;

}

@property (nonatomic,retain) id collection;              //@synthesize collection=_collection - In the implementation block
+(BOOL)hasKey;
+(id)planningInfoForKeyConstraint:(int)arg1 ;
+(const char*)sqliteCreateTableStatement;
+(const char*)sqliteMethodName;
+(BOOL)hasRowId;
+(id)planningInfoForRowIdConstraint:(int)arg1 ;
+(BOOL)canOrderByRowId:(BOOL)arg1 ;
+(BOOL)canOrderByKey:(BOOL)arg1 ;
+(BOOL)canOrderByValue:(BOOL)arg1 ;
+(double)baseEstimatedRows;
+(id)planningInfoForValueConstraint:(int)arg1 ;
+(double)baseEstimatedCost;
-(id)collection;
-(id)init;
-(void)setCollection:(id)arg1 ;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(BOOL)outputEof;
-(unsigned long long)outputRowId;
-(void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2 ;
-(id)outputValue;
-(BOOL)currentIndexEof;
-(void)stepOutputRow;
-(void)finalizeConstraints;
-(id)currentIndexedValue;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyValueSort:(BOOL)arg1 ;
-(BOOL)checkCurrentRow;
-(void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyRowIdSort:(BOOL)arg1 ;
-(void)applyKeySort:(BOOL)arg1 ;
-(void)stayOnOrStepToOutputRow;
-(id)outputKey;
-(void)stepIndexedRow;
@end

