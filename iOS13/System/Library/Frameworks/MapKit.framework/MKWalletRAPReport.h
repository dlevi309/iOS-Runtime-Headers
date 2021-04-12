/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class GEORPFeedbackRequestParameters, GEORPProblem, NSString;

@interface MKWalletRAPReport : NSObject {

	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	GEORPFeedbackRequestParameters* _requestParameters;
	GEORPProblem* _problem;

}

@property (nonatomic,copy) NSString * merchantAdamId; 
@property (nonatomic,readonly) GEORPFeedbackRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy) NSString * reportersComment; 
@property (nonatomic,copy) NSString * correlationId; 
@property (nonatomic,readonly) GEORPProblem * problem;                                          //@synthesize problem=_problem - In the implementation block
-(NSString *)merchantAdamId;
-(NSString *)correlationId;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(GEORPProblem *)problem;
-(GEORPFeedbackRequestParameters *)requestParameters;
-(id)initForMerchantIssue:(unsigned long long)arg1 merchantIndustryCode:(long long)arg2 mapsIdentifier:(unsigned long long)arg3 merchantName:(id)arg4 merchantRawName:(id)arg5 merchantIndustryCategory:(id)arg6 merchantURL:(id)arg7 merchantFormattedAddress:(id)arg8 transactionTime:(double)arg9 transactionType:(id)arg10 transactionLocation:(CGSize)arg11 ;
-(void)setReportersComment:(NSString *)arg1 ;
-(NSString *)reportersComment;
@end

