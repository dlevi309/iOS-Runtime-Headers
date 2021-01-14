/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSError, AMSPurchase, NSDictionary;

@interface AMSPurchaseResult : NSObject {

	NSString* _correlationID;
	NSError* _error;
	AMSPurchase* _purchase;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy) NSString * correlationID;                       //@synthesize correlationID=_correlationID - In the implementation block
@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) AMSPurchase * purchase;                         //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(AMSPurchase *)purchase;
-(NSDictionary *)responseDictionary;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(void)setPurchase:(AMSPurchase *)arg1 ;
-(void)setCorrelationID:(NSString *)arg1 ;
-(NSString *)correlationID;
@end

