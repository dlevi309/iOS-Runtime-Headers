/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSURL, MKWalletMerchantStylingInfo;

@interface PKMapsBrand : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	int _resultProviderIdentifier;
	unsigned long long _identifier;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _url;
	long long _category;
	NSString* _detailedCategory;
	MKWalletMerchantStylingInfo* _stylingInfo;
	NSURL* _logoURL;
	NSURL* _heroImageURL;
	NSString* _heroImageAttributionName;
	NSURL* _businessChatURL;

}

@property (assign,nonatomic) unsigned long long identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int resultProviderIdentifier;                           //@synthesize resultProviderIdentifier=_resultProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (setter=setURL:,nonatomic,copy) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * detailedCategory;                              //@synthesize detailedCategory=_detailedCategory - In the implementation block
@property (nonatomic,retain) MKWalletMerchantStylingInfo * stylingInfo;              //@synthesize stylingInfo=_stylingInfo - In the implementation block
@property (nonatomic,copy) NSURL * logoURL;                                          //@synthesize logoURL=_logoURL - In the implementation block
@property (nonatomic,retain) NSURL * heroImageURL;                                   //@synthesize heroImageURL=_heroImageURL - In the implementation block
@property (nonatomic,copy) NSString * heroImageAttributionName;                      //@synthesize heroImageAttributionName=_heroImageAttributionName - In the implementation block
@property (nonatomic,copy) NSURL * businessChatURL;                                  //@synthesize businessChatURL=_businessChatURL - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(void)deleteFromCloudStoreRecord:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)identifier;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(unsigned long long)itemType;
-(NSURL *)heroImageURL;
-(void)setHeroImageURL:(NSURL *)arg1 ;
-(id)jsonRepresentation;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(BOOL)isEqualToMapsBrand:(id)arg1 ;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(int)resultProviderIdentifier;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(NSString *)detailedCategory;
-(void)setDetailedCategory:(NSString *)arg1 ;
-(MKWalletMerchantStylingInfo *)stylingInfo;
-(void)setStylingInfo:(MKWalletMerchantStylingInfo *)arg1 ;
-(NSURL *)logoURL;
-(void)setLogoURL:(NSURL *)arg1 ;
-(NSString *)heroImageAttributionName;
-(void)setHeroImageAttributionName:(NSString *)arg1 ;
-(NSURL *)businessChatURL;
-(void)setBusinessChatURL:(NSURL *)arg1 ;
@end

