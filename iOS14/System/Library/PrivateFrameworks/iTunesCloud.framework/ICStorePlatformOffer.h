/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSArray, NSString, NSNumber;

@interface ICStorePlatformOffer : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSArray * assets; 
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * formattedPrice; 
@property (nonatomic,copy,readonly) NSString * offerType; 
@property (nonatomic,copy,readonly) NSNumber * price; 
-(NSArray *)assets;
-(NSNumber *)price;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(NSString *)offerType;
@end

