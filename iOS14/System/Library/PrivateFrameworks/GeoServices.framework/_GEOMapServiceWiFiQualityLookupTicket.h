/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceWiFiQualityNetworkSearchTicket.h>
#import <libobjc.A.dylib/GEOMapServiceWiFiQualityLocationSearchTicket.h>
#import <libobjc.A.dylib/GEOMapServiceWiFiQualityTileLoadTicket.h>

@class GEOWiFiQualityServiceRequest, NSString;

@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket <GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket> {

	GEOWiFiQualityServiceRequest* _request;
	NSString* _tileKey;
	NSString* _eTag;
	NSString* _requestID;

}

@property (nonatomic,readonly) SCD_Struct_GE91 dataRequestKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelNetworkSearch;
-(void)cancelTileLoad;
-(void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancel;
-(id)initWithRequestID:(id)arg1 ;
-(id)initWithRequest:(id)arg1 requestId:(id)arg2 ;
-(id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 ;
-(void)cancelLocationSearch;
-(void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SCD_Struct_GE91)dataRequestKind;
@end

