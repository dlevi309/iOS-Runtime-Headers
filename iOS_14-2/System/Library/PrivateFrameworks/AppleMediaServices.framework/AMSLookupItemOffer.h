/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSString, NSNumber;

@interface AMSLookupItemOffer : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,readonly) NSString * offerType; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * subscriptionType; 
-(NSNumber *)price;
-(NSString *)subscriptionType;
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(id)initWithLookupDictionary:(id)arg1 ;
-(id)actionTextForType:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(NSString *)offerType;
@end

