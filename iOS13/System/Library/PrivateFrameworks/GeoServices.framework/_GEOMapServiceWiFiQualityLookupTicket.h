/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE2 dataRequestKind; 
-(void)_cancel;
-(SCD_Struct_GE2)dataRequestKind;
-(id)initWithRequestID:(id)arg1 ;
-(void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelNetworkSearch;
-(void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelLocationSearch;
-(void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelTileLoad;
-(id)initWithRequest:(id)arg1 requestId:(id)arg2 ;
-(id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 ;
@end

