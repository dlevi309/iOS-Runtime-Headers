/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOCoarseLocationData : NSObject {

	unique_ptr<gloria::DB, std::__1::default_delete<gloria::DB> >* _db;
	vector<unsigned char, std::__1::allocator<unsigned char> > _availableZoomLevels;

}
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(id)snappedLocationForLocation:(id)arg1 ;
-(BOOL)_populateAvailableZoomRange;
@end

