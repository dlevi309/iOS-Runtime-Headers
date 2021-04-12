/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSURL, CNPostalAddress, MKWalletMerchantStylingInfo, CLLocation;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	int _resultProviderIdentifier;
	unsigned long long _identifier;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _url;
	double _locationLatitude;
	double _locationLongitude;
	CNPostalAddress* _postalAddress;
	NSURL* _heroImageURL;
	NSString* _heroImageAttributionName;
	long long _category;
	NSString* _detailedCategory;
	MKWalletMerchantStylingInfo* _stylingInfo;
	NSURL* _businessChatURL;

}

@property (assign,nonatomic) unsigned long long identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int resultProviderIdentifier;                           //@synthesize resultProviderIdentifier=_resultProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (setter=setURL:,nonatomic,copy) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) double locationLatitude;                                //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                               //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (nonatomic,copy) CNPostalAddress * postalAddress;                          //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,copy) NSURL * heroImageURL;                                     //@synthesize heroImageURL=_heroImageURL - In the implementation block
@property (nonatomic,copy) NSString * heroImageAttributionName;                      //@synthesize heroImageAttributionName=_heroImageAttributionName - In the implementation block
@property (assign,nonatomic) long long category;                                     //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * detailedCategory;                              //@synthesize detailedCategory=_detailedCategory - In the implementation block
@property (nonatomic,retain) MKWalletMerchantStylingInfo * stylingInfo;              //@synthesize stylingInfo=_stylingInfo - In the implementation block
@property (nonatomic,copy) NSURL * businessChatURL;                                  //@synthesize businessChatURL=_businessChatURL - In the implementation block
@property (nonatomic,copy) CLLocation * location; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
+(void)deleteFromCloudStoreRecord:(id)arg1 ;
+(id)recordNamePrefix;
-(void)setCategory:(long long)arg1 ;
-(id)jsonRepresentation;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(CLLocation *)location;
-(void)setURL:(id)arg1 ;
-(MKWalletMerchantStylingInfo *)stylingInfo;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)category;
-(NSURL *)url;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)name;
-(double)locationLongitude;
-(double)locationLatitude;
-(void)setStylingInfo:(MKWalletMerchantStylingInfo *)arg1 ;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(NSString *)detailedCategory;
-(void)setDetailedCategory:(NSString *)arg1 ;
-(NSString *)heroImageAttributionName;
-(NSURL *)businessChatURL;
-(void)setHeroImageAttributionName:(NSString *)arg1 ;
-(void)setBusinessChatURL:(NSURL *)arg1 ;
-(id)description;
-(BOOL)isValid;
-(unsigned long long)itemType;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)_jsonEncodedPostalAddressString;
-(BOOL)isEqualToMapsMerchant:(id)arg1 ;
-(unsigned long long)hash;
-(id)primaryIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)heroImageURL;
-(void)setHeroImageURL:(NSURL *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)identifier;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(int)resultProviderIdentifier;
-(void)setResultProviderIdentifier:(int)arg1 ;
-(CNPostalAddress *)postalAddress;
-(BOOL)isEqual:(id)arg1 ;
@end

