/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSArray;


@protocol GEOComposedRouteTransitDisplayStrings <NSObject>
@property (nonatomic,readonly) id<GEOServerFormattedString> previewDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> pickingDurationFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> planningDescriptionFormatString; 
@property (nonatomic,readonly) id<GEOServerFormattedString> transitDescriptionFormatString; 
@property (nonatomic,readonly) NSArray * transitAdvisories; 
@property (nonatomic,readonly) id<GEOServerFormattedString> transitRouteBadge; 
@required
-(id<GEOServerFormattedString>)previewDurationFormatString;
-(id<GEOServerFormattedString>)pickingDurationFormatString;
-(id<GEOServerFormattedString>)planningDescriptionFormatString;
-(NSArray *)transitAdvisories;
-(id<GEOServerFormattedString>)transitDescriptionFormatString;
-(id<GEOServerFormattedString>)transitRouteBadge;

@end

