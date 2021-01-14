/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSString, NSDate;

@interface PHACoreDuetDatasetSample : NSObject {

	NSString* _identifier;
	NSDate* _date;
	NSString* _subset;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * subset;                  //@synthesize subset=_subset - In the implementation block
-(NSString *)subset;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithIdentifier:(id)arg1 andDate:(id)arg2 forSubset:(id)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setSubset:(NSString *)arg1 ;
@end

