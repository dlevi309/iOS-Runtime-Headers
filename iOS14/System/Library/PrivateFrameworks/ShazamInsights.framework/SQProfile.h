/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
*/


@class NSString;

@interface SQProfile : NSObject {

	NSString* _partnerName;
	NSString* _token;

}

@property (nonatomic,copy) NSString * partnerName;              //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy) NSString * token;                    //@synthesize token=_token - In the implementation block
+(id)profileWithPartnerName:(id)arg1 token:(id)arg2 ;
-(NSString *)partnerName;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(void)setPartnerName:(NSString *)arg1 ;
@end

