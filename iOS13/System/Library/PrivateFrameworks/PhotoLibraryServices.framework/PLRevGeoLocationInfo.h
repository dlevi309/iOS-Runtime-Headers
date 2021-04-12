/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PLRevGeoMapItem, CNPostalAddress, NSString, PLRevGeoCompoundNameInfo;

@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding> {

	BOOL _isHome;
	PLRevGeoMapItem* _mapItem;
	CNPostalAddress* _postalAddress;
	NSString* _addressString;
	NSString* _countryCode;
	NSString* _geoServiceProvider;
	PLRevGeoCompoundNameInfo* _compoundNameInfo;
	PLRevGeoCompoundNameInfo* _compoundSecondaryNameInfo;

}

@property (nonatomic,readonly) PLRevGeoMapItem * mapItem;                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) CNPostalAddress * postalAddress;                                   //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) NSString * addressString;                                          //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                                            //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * geoServiceProvider;                                     //@synthesize geoServiceProvider=_geoServiceProvider - In the implementation block
@property (nonatomic,readonly) PLRevGeoCompoundNameInfo * compoundNameInfo;                       //@synthesize compoundNameInfo=_compoundNameInfo - In the implementation block
@property (nonatomic,readonly) PLRevGeoCompoundNameInfo * compoundSecondaryNameInfo;              //@synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo - In the implementation block
@property (assign,nonatomic) BOOL isHome;                                                         //@synthesize isHome=_isHome - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)infoFromPlistData:(id)arg1 ;
+(BOOL)isInvalidWithCoder:(id)arg1 ;
+(id)_namingOrderForAssetDetailedReverseGeoDescription;
+(id)_namingOrderForAssetReverseGeoDescription;
+(id)newDataFromRevGeoLocationInfo:(id)arg1 ;
+(id)_newRevGeoLocationInfoFromData:(id)arg1 ;
+(BOOL)isInvalidWithPlistData:(id)arg1 ;
+(id)countryCodeWithGEOMapItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(CNPostalAddress *)postalAddress;
-(NSString *)addressString;
-(BOOL)hasLocation;
-(PLRevGeoMapItem *)mapItem;
-(id)plistData;
-(id)placeWithAnnotation:(id)arg1 ;
-(BOOL)isHome;
-(PLRevGeoCompoundNameInfo *)compoundNameInfo;
-(id)initWithMapItem:(id)arg1 postalAddress:(id)arg2 addressString:(id)arg3 countryCode:(id)arg4 compoundNameInfo:(id)arg5 compoundSecondaryNameInfo:(id)arg6 isHome:(BOOL)arg7 geoServiceProvider:(id)arg8 ;
-(BOOL)hasMapItem;
-(id)placeNamesForLocalizedDetailedDescription;
-(NSString *)geoServiceProvider;
-(PLRevGeoCompoundNameInfo *)compoundSecondaryNameInfo;
-(void)setIsHome:(BOOL)arg1 ;
-(BOOL)locationWasResolvedWithBestRevGeoProvider;
-(id)initWithGEOMapItem:(id)arg1 ;
@end

