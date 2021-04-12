/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSDictionary *)responseDictionary;
-(AMSPurchase *)purchase;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(void)setCorrelationID:(NSString *)arg1 ;
-(void)setPurchase:(AMSPurchase *)arg1 ;
-(NSString *)correlationID;
@end

