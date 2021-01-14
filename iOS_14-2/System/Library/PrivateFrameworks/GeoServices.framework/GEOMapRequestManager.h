/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableSet, geo_isolater;

@interface GEOMapRequestManager : NSObject {

	NSMutableSet* _requests;
	geo_isolater* _isolater;

}
-(id)init;
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
-(void)dealloc;
@end

