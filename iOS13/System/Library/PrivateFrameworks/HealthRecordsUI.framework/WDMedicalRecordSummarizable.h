/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

@class NSArray, NSString;


@protocol WDMedicalRecordSummarizable <NSObject>
@property (nonatomic,copy,readonly) NSArray * displayItems; 
@property (nonatomic,copy,readonly) NSString * summarySortString; 
@required
-(NSArray *)displayItems;
-(void)recomputeIfNeeded;
-(void)addMedicalRecord:(id)arg1;
-(NSString *)summarySortString;
-(void)showTruncatedRecords;
-(void)setNeedsRecompute;

@end

