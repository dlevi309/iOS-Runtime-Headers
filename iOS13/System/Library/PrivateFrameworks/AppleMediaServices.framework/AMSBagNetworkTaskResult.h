/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)storefront;
-(void)setStorefront:(NSString *)arg1 ;
-(BOOL)expired;
@end

