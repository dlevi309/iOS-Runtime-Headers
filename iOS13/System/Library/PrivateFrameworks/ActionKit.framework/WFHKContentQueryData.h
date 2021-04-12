/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSDate, HKQuantityType, HKCategoryType, NSString, HKSampleType;

@interface WFHKContentQueryData : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantityType* _quantityType;
	HKCategoryType* _categoryType;
	NSString* _sourceName;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,retain) HKCategoryType * categoryType;              //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) HKSampleType * sampleType; 
@property (nonatomic,retain) NSString * sourceName;                      //@synthesize sourceName=_sourceName - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(HKCategoryType *)categoryType;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setCategoryType:(HKCategoryType *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(NSString *)sourceName;
-(void)setSourceName:(NSString *)arg1 ;
-(HKSampleType *)sampleType;
@end

