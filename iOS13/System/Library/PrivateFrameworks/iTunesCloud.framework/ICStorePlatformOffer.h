/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)offerType;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(id)initWithResponseDictionary:(id)arg1 ;
@end

