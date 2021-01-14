/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet {

	BOOL _reverseLocationDataIsValid;
	NSData* _reverseLocationData;
	unsigned long long _variationSuggestionStates;

}

@property (nonatomic,readonly) BOOL reverseLocationDataIsValid;                           //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                              //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
@property (nonatomic,readonly) NSString * addressString; 
@property (nonatomic,readonly) unsigned long long variationSuggestionStates;              //@synthesize variationSuggestionStates=_variationSuggestionStates - In the implementation block
+(id)propertySetName;
+(id)propertiesToFetch;
-(NSData *)reverseLocationData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(BOOL)reverseLocationDataIsValid;
-(id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL*)arg1 ;
-(unsigned long long)variationSuggestionStates;
-(NSString *)addressString;
-(id)localizedGeoDescriptionIsHome:(BOOL*)arg1 ;
-(id)_locationInfo;
@end

