/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDAllCollectionsViewResultFilter, NSArray, GEOAllCollectionsViewResultFilterTypeAddress, GEOAllCollectionsViewResultFilterTypeKeyword;

@interface GEOAllCollectionsViewResultFilter : NSObject {

	GEOPDAllCollectionsViewResultFilter* _resultFilter;
	NSArray* _places;

}

@property (nonatomic,readonly) long long filterType; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeAddress * addressFilter; 
@property (nonatomic,readonly) GEOAllCollectionsViewResultFilterTypeKeyword * keywordFilter; 
-(long long)filterType;
-(GEOAllCollectionsViewResultFilterTypeAddress *)addressFilter;
-(GEOAllCollectionsViewResultFilterTypeKeyword *)keywordFilter;
-(id)initWithAllCollectionsViewResultFilter:(id)arg1 withPlaces:(id)arg2 ;
@end

