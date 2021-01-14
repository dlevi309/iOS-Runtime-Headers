/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSNumber;

@interface ADLogisticRegressionModel : NSObject {

	NSNumber* _pttr;
	NSNumber* _appUsageSimilarity;

}

@property (nonatomic,retain) NSNumber * pttr;                            //@synthesize pttr=_pttr - In the implementation block
@property (nonatomic,retain) NSNumber * appUsageSimilarity;              //@synthesize appUsageSimilarity=_appUsageSimilarity - In the implementation block
-(NSNumber *)pttr;
-(float)sigmoid:(float)arg1 ;
-(void)setPttr:(NSNumber *)arg1 ;
-(id)initWithPTTR:(id)arg1 appUsageSimilarity:(id)arg2 ;
-(id)predictionWithWeights:(id)arg1 ;
-(NSNumber *)appUsageSimilarity;
-(void)setAppUsageSimilarity:(NSNumber *)arg1 ;
@end

