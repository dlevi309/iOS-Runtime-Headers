/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSDictionary, NSString, NSArray;

@interface STRegionRatings : NSObject {

	NSDictionary* _ratingsPlist;

}

@property (readonly) NSDictionary * ratingsPlist;                             //@synthesize ratingsPlist=_ratingsPlist - In the implementation block
@property (copy,readonly) NSString * preferredRegion; 
@property (copy,readonly) NSDictionary * localizedRegionsByCode; 
@property (copy,readonly) NSArray * localizedRegionAndCodePairs; 
+(id)sharedRatings;
-(id)init;
-(NSDictionary *)localizedRegionsByCode;
-(id)localizedMovieRatingsForRegion:(id)arg1 ;
-(id)localizedTVRatingsForRegion:(id)arg1 ;
-(id)localizedAppRatingsForRegion:(id)arg1 ;
-(NSString *)preferredRegion;
-(id)localizedStringForAppRatingLabel:(id)arg1 ;
-(NSDictionary *)ratingsPlist;
-(id)_overrideValueForString:(id)arg1 ;
-(id)_localizedLabelForRegion:(id)arg1 rating:(id)arg2 ;
-(id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4 ;
-(NSArray *)localizedRegionAndCodePairs;
@end

