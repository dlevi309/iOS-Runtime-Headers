/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSDate;

@interface WFHKGroupingConfiguration : NSObject {

	BOOL _fillMissing;
	long long _groupingOption;
	NSDate* _queryStartDate;
	NSDate* _queryEndDate;

}

@property (assign,nonatomic) long long groupingOption;              //@synthesize groupingOption=_groupingOption - In the implementation block
@property (assign,nonatomic) BOOL fillMissing;                      //@synthesize fillMissing=_fillMissing - In the implementation block
@property (nonatomic,retain) NSDate * queryStartDate;               //@synthesize queryStartDate=_queryStartDate - In the implementation block
@property (nonatomic,retain) NSDate * queryEndDate;                 //@synthesize queryEndDate=_queryEndDate - In the implementation block
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(BOOL)fillMissing;
-(void)setFillMissing:(BOOL)arg1 ;
-(NSDate *)queryStartDate;
-(void)setQueryStartDate:(NSDate *)arg1 ;
-(NSDate *)queryEndDate;
-(void)setQueryEndDate:(NSDate *)arg1 ;
@end

