/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface SKUIItemOffer : NSObject <SKUICacheCoding> {

	NSString* _actionParameters;
	NSString* _buttonText;
	NSString* _confirmationText;
	long long _fileSize;
	NSString* _fileSizeText;
	NSString* _offerTypeString;
	float _price;
	NSString* _variantIdentifier;
	BOOL _shouldEnableMessagesExtension;

}

@property (nonatomic,readonly) NSString * actionParameters;                            //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,readonly) NSString * buttonText;                                  //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,readonly) NSString * confirmationText;                            //@synthesize confirmationText=_confirmationText - In the implementation block
@property (nonatomic,readonly) long long fileSize;                                     //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSString * fileSizeText; 
@property (nonatomic,readonly) NSDictionary * lookupDictionary; 
@property (nonatomic,readonly) long long offerType; 
@property (nonatomic,readonly) float price;                                            //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableMessagesExtension;                     //@synthesize shouldEnableMessagesExtension=_shouldEnableMessagesExtension - In the implementation block
@property (nonatomic,readonly) NSString * variantIdentifier;                           //@synthesize variantIdentifier=_variantIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(long long)fileSize;
-(float)price;
-(NSString *)buttonText;
-(NSString *)variantIdentifier;
-(long long)offerType;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)initWithButtonText:(id)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSString *)confirmationText;
-(NSMutableDictionary *)cacheRepresentation;
-(void)_setFileSizeWithAssets:(id)arg1 ;
-(void)_setFileSizeWithFlavors:(id)arg1 ;
-(id)initWithOfferDictionary:(id)arg1 ;
-(id)initWithRedownloadToken:(id)arg1 ;
-(NSString *)fileSizeText;
-(void)_addActionParameterWithName:(id)arg1 value:(id)arg2 ;
-(void)_setFileSizeWithDeviceSizes:(id)arg1 ;
-(NSString *)actionParameters;
-(BOOL)shouldEnableMessagesExtension;
@end

