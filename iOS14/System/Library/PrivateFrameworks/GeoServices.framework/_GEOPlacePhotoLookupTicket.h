/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServicePhotoLookupTicket.h>

@class NSString, GEOMapItemIdentifier, GEOMapServiceTraits;

@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {

	NSString* _vendorIdentifier;
	GEOMapItemIdentifier* _mapItemIdentifier;
	NSRange _range;
	GEOMapServiceTraits* _traits;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)initWithVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(NSRange)arg3 traits:(id)arg4 ;
-(void)cancel;
@end

