/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)offerIdentifier;
-(void)setOfferIdentifier:(NSString *)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)offerTitleText;
-(void)setOfferTitleText:(NSString *)arg1 ;
-(NSString *)offerDetailText;
-(void)setOfferDetailText:(NSString *)arg1 ;
@end

