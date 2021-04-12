/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)queryStartDate;
-(void)setQueryStartDate:(NSDate *)arg1 ;
-(long long)groupingOption;
-(void)setGroupingOption:(long long)arg1 ;
-(BOOL)fillMissing;
-(void)setFillMissing:(BOOL)arg1 ;
-(NSDate *)queryEndDate;
-(void)setQueryEndDate:(NSDate *)arg1 ;
@end

