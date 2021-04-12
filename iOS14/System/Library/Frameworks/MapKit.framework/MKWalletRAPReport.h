/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL isAppleCard; 
@property (assign,nonatomic) unsigned long long lookupTransactionType; 
-(id)initForMerchantIssue:(unsigned long long)arg1 merchantIndustryCode:(long long)arg2 mapsIdentifier:(unsigned long long)arg3 merchantName:(id)arg4 merchantRawName:(id)arg5 merchantIndustryCategory:(id)arg6 merchantURL:(id)arg7 merchantFormattedAddress:(id)arg8 transactionTime:(double)arg9 transactionType:(id)arg10 transactionLocation:(CGSize)arg11 ;
-(void)setReportersComment:(NSString *)arg1 ;
-(NSString *)reportersComment;
-(unsigned long long)lookupTransactionType;
-(void)setLookupTransactionType:(unsigned long long)arg1 ;
-(NSString *)merchantAdamId;
-(NSString *)correlationId;
-(void)setMerchantAdamId:(NSString *)arg1 ;
-(void)setCorrelationId:(NSString *)arg1 ;
-(void)setIsAppleCard:(BOOL)arg1 ;
-(BOOL)isAppleCard;
-(GEORPProblem *)problem;
-(GEORPFeedbackRequestParameters *)requestParameters;
@end

