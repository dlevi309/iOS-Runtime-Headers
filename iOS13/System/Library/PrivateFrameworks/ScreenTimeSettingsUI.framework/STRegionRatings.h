/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

