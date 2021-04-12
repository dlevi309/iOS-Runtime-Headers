/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)addressString;
-(id)_locationInfo;
-(BOOL)reverseLocationDataIsValid;
-(NSData *)reverseLocationData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(id)localizedGeoDescriptionIsHome:(BOOL*)arg1 ;
-(id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL*)arg1 ;
-(unsigned long long)variationSuggestionStates;
@end

