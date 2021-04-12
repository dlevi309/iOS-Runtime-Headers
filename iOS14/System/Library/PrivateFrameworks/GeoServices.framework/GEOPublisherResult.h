/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPublisherResult, GEOPDComponent, GEOPublisher;

@interface GEOPublisherResult : NSObject {

	GEOPDPublisherResult* _publisherResult;
	GEOPDComponent* _publisherComponent;

}

@property (nonatomic,readonly) GEOPublisher * publisher; 
+(id)publisherResultsFromResponse:(id)arg1 ;
-(GEOPublisher *)publisher;
-(id)initWithPublisherResult:(id)arg1 ;
@end

