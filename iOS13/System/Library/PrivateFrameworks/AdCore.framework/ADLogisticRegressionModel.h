/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSNumber;

@interface ADLogisticRegressionModel : NSObject {

	NSNumber* _pttr;
	NSNumber* _appUsageSimilarity;

}

@property (nonatomic,retain) NSNumber * pttr;                            //@synthesize pttr=_pttr - In the implementation block
@property (nonatomic,retain) NSNumber * appUsageSimilarity;              //@synthesize appUsageSimilarity=_appUsageSimilarity - In the implementation block
-(float)sigmoid:(float)arg1 ;
-(id)initWithPTTR:(id)arg1 appUsageSimilarity:(id)arg2 ;
-(id)predictionWithWeights:(id)arg1 ;
-(NSNumber *)pttr;
-(void)setPttr:(NSNumber *)arg1 ;
-(NSNumber *)appUsageSimilarity;
-(void)setAppUsageSimilarity:(NSNumber *)arg1 ;
@end

