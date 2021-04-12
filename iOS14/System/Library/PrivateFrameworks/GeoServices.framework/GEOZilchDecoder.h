/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject;

@interface GEOZilchDecoder : GEOMapRequestManager {

	NSObject*<OS_dispatch_queue> _decoderQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	mutex _lock;
	id<GEOMapAccessRestrictions> _mapAccessRestrictions;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> decoderQueue;                            //@synthesize decoderQueue=_decoderQueue - In the implementation block
@property (assign,nonatomic,__weak) id<GEOMapAccessRestrictions> mapAccessRestrictions;              //@synthesize mapAccessRestrictions=_mapAccessRestrictions - In the implementation block
+(BOOL)decodingSupported;
-(id)requestQueue;
-(id)init;
-(void)setMapAccessRestrictions:(id<GEOMapAccessRestrictions>)arg1 ;
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
-(void)setRequestQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)decoderQueue;
-(id)decodeZilchMessage:(shared_ptr<zilch::Message>*)arg1 pathHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id<GEOMapAccessRestrictions>)mapAccessRestrictions;
@end

