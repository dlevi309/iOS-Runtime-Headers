/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSDate, NSString;

@interface AMSBagNetworkTaskResult : NSObject {

	NSDictionary* _data;
	NSDate* _expirationDate;
	NSString* _storefront;

}

@property (nonatomic,retain) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
@property (nonatomic,retain) NSString * storefront;                //@synthesize storefront=_storefront - In the implementation block
-(NSString *)storefront;
-(void)setStorefront:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(NSDictionary *)data;
-(BOOL)expired;
@end

