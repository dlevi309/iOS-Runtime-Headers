/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol GEOCompletionItem;
@class NSString, CLLocation, _MKLocalSearchMerchantParameters, _MKLocalSearchExternalTransitLookupParameters, NSArray, MKPointOfInterestFilter;

@interface MKLocalSearchRequest : NSObject <NSCopying> {

	NSString* _naturalLanguageQuery;
	BOOL _hasRegion;
	SCD_Struct_MK13 _region;
	BOOL _allowPhoneNumberLookupUsingCellular;
	BOOL _hasSentFeedbackForCompletion;
	int _resultProviderID;
	id<GEOCompletionItem> _geoCompletionItem;
	CLLocation* _deviceLocation;
	_MKLocalSearchMerchantParameters* _merchantParameters;
	_MKLocalSearchExternalTransitLookupParameters* _externalTransitLookupParameters;
	NSArray* _phoneNumbers;
	NSArray* _muids;
	NSString* _contactsDataString;
	NSString* _canonicalSearchString;
	unsigned long long _resultTypes;
	MKPointOfInterestFilter* _pointOfInterestFilter;

}

@property (nonatomic,readonly) BOOL _hasRegion;                                                                                                                                                                //@synthesize hasRegion=_hasRegion - In the implementation block
@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem;                                                                                                                                        //@synthesize geoCompletionItem=_geoCompletionItem - In the implementation block
@property (assign,nonatomic) BOOL hasSentFeedbackForCompletion;                                                                                                                                                //@synthesize hasSentFeedbackForCompletion=_hasSentFeedbackForCompletion - In the implementation block
@property (setter=_setDeviceLocation:,getter=_deviceLocation,nonatomic,retain) CLLocation * deviceLocation;                                                                                                    //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (setter=_setMerchantParameters:,getter=_merchantParameters,nonatomic,retain) _MKLocalSearchMerchantParameters * merchantParameters;                                                                  //@synthesize merchantParameters=_merchantParameters - In the implementation block
@property (setter=_setExternalTransitLookupParameters:,getter=_externalTransitLookupParameters,nonatomic,retain) _MKLocalSearchExternalTransitLookupParameters * externalTransitLookupParameters;              //@synthesize externalTransitLookupParameters=_externalTransitLookupParameters - In the implementation block
@property (setter=_setPhoneNumbers:,getter=_phoneNumbers,nonatomic,retain) NSArray * phoneNumbers;                                                                                                             //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (assign,setter=_setAllowPhoneNumberLookupUsingCellular:,getter=_allowPhoneNumberLookupUsingCellular,nonatomic) BOOL allowPhoneNumberLookupUsingCellular;                                             //@synthesize allowPhoneNumberLookupUsingCellular=_allowPhoneNumberLookupUsingCellular - In the implementation block
@property (setter=_setMuids:,getter=_muids,nonatomic,retain) NSArray * muids;                                                                                                                                  //@synthesize muids=_muids - In the implementation block
@property (assign,setter=_setResultProviderID:,getter=_resultProviderID,nonatomic) int resultProviderID;                                                                                                       //@synthesize resultProviderID=_resultProviderID - In the implementation block
@property (setter=_setContactsDataString:,getter=_contactsDataString,nonatomic,retain) NSString * contactsDataString;                                                                                          //@synthesize contactsDataString=_contactsDataString - In the implementation block
@property (setter=_setCanonicalSearchString:,getter=_canonicalSearchString,nonatomic,retain) NSString * canonicalSearchString;                                                                                 //@synthesize canonicalSearchString=_canonicalSearchString - In the implementation block
@property (nonatomic,copy) NSString * naturalLanguageQuery;                                                                                                                                                    //@synthesize naturalLanguageQuery=_naturalLanguageQuery - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK8 region;                                                                                                                                                            //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long resultTypes;                                                                                                                                                   //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,copy) MKPointOfInterestFilter * pointOfInterestFilter;                                                                                                                                    //@synthesize pointOfInterestFilter=_pointOfInterestFilter - In the implementation block
+(id)searchRequestWithCompletion:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_MK8)region;
-(id)_dictionaryRepresentation;
-(void)setRegion:(SCD_Struct_MK8)arg1 ;
-(id)_deviceLocation;
-(int)_resultProviderID;
-(id)_phoneNumbers;
-(id)_externalTransitLookupParameters;
-(id)_muids;
-(id)initWithCompletion:(id)arg1 ;
-(void)_setPhoneNumbers:(id)arg1 ;
-(unsigned long long)resultTypes;
-(void)_setContactsDataString:(id)arg1 ;
-(void)_setAllowPhoneNumberLookupUsingCellular:(BOOL)arg1 ;
-(void)setPointOfInterestFilter:(MKPointOfInterestFilter *)arg1 ;
-(MKPointOfInterestFilter *)pointOfInterestFilter;
-(id)_merchantParameters;
-(BOOL)_allowPhoneNumberLookupUsingCellular;
-(BOOL)_hasRegion;
-(id)_canonicalSearchString;
-(id<GEOCompletionItem>)geoCompletionItem;
-(BOOL)hasSentFeedbackForCompletion;
-(void)setHasSentFeedbackForCompletion:(BOOL)arg1 ;
-(NSString *)naturalLanguageQuery;
-(void)setNaturalLanguageQuery:(NSString *)arg1 ;
-(void)_setMuids:(id)arg1 ;
-(void)_setResultProviderID:(int)arg1 ;
-(id)initWithNaturalLanguageQuery:(id)arg1 ;
-(id)initWithNaturalLanguageQuery:(id)arg1 region:(SCD_Struct_MK8)arg2 ;
-(id)initWithMapsURL:(id)arg1 ;
-(void)_setDeviceLocation:(id)arg1 ;
-(void)_setMerchantParameters:(id)arg1 ;
-(void)_setExternalTransitLookupParameters:(id)arg1 ;
-(id)_contactsDataString;
-(void)_setCanonicalSearchString:(id)arg1 ;
-(void)setResultTypes:(unsigned long long)arg1 ;
@end

