/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantOfferExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying> {

	NSString* _offerTitleText;
	NSString* _offerDetailText;
	NSString* _offerIdentifier;

}

@property (nonatomic,copy) NSString * offerTitleText;               //@synthesize offerTitleText=_offerTitleText - In the implementation block
@property (nonatomic,copy) NSString * offerDetailText;              //@synthesize offerDetailText=_offerDetailText - In the implementation block
@property (nonatomic,copy) NSString * offerIdentifier;              //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)offerTitleText;
-(void)setOfferTitleText:(NSString *)arg1 ;
-(NSString *)offerDetailText;
-(void)setOfferDetailText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)offerIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOfferIdentifier:(NSString *)arg1 ;
@end

