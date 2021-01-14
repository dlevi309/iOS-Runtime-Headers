/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPublisherViewResultFilter, NSArray, GEOPublisherViewResultFilterAddress, GEOPublisherViewResultFilterKeyword;

@interface GEOPublisherViewResultFilter : NSObject {

	GEOPDPublisherViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOPublisherViewResultFilterAddress * addressFilter; 
@property (nonatomic,readonly) GEOPublisherViewResultFilterKeyword * keywordFilter; 
-(long long)filterType;
-(GEOPublisherViewResultFilterAddress *)addressFilter;
-(GEOPublisherViewResultFilterKeyword *)keywordFilter;
-(id)initWithPublisherViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
@end

