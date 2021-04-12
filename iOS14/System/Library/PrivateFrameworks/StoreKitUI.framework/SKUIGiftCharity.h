/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString, NSArray, SKUIArtwork;

@interface SKUIGiftCharity : NSObject {

	NSString* _amountDisclaimer;
	NSArray* _amounts;
	NSString* _description;
	NSString* _identifier;
	NSString* _legalText;
	NSString* _legalText2;
	SKUIArtwork* _logoArtwork;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * amountDisclaimer;                //@synthesize amountDisclaimer=_amountDisclaimer - In the implementation block
@property (nonatomic,readonly) NSString * charityDescription;              //@synthesize description=_description - In the implementation block
@property (nonatomic,readonly) NSString * legalText;                       //@synthesize legalText=_legalText - In the implementation block
@property (nonatomic,readonly) NSString * legalText2;                      //@synthesize legalText2=_legalText2 - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * donationAmounts;                  //@synthesize amounts=_amounts - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * logoArtwork;                  //@synthesize logoArtwork=_logoArtwork - In the implementation block
-(NSString *)name;
-(NSString *)identifier;
-(SKUIArtwork *)logoArtwork;
-(id)initWithCharityDictionary:(id)arg1 ;
-(NSString *)amountDisclaimer;
-(NSString *)charityDescription;
-(NSArray *)donationAmounts;
-(NSString *)legalText;
-(NSString *)legalText2;
@end

