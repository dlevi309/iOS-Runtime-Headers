/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEORouteAttributes;

@interface _GEODirectionsServiceRequestBuilder : NSObject {

	GEORouteAttributes* _builder;
	/*^block*/id _block;

}
+(id)builderFor:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)buildRequest:(id)arg1 result:(/*^block*/id)arg2 ;
@end

