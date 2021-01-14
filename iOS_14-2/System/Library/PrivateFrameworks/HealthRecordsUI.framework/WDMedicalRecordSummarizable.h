/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

@class NSArray, NSString;


@protocol WDMedicalRecordSummarizable <NSObject>
@property (nonatomic,copy,readonly) NSArray * displayItems; 
@property (nonatomic,copy,readonly) NSString * summarySortString; 
@required
-(void)addMedicalRecord:(id)arg1;
-(void)recomputeIfNeeded;
-(NSString *)summarySortString;
-(void)showTruncatedRecords;
-(void)setNeedsRecompute;
-(NSArray *)displayItems;

@end

