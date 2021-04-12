/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServiceBatchNearbyTicket.h>

@class GEOMapServiceTraits, NSArray, NSString;

@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket <GEOMapServiceBatchNearbyTicket> {

	NSArray* _categories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) SCD_Struct_GE2 dataRequestKind; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(id)resultSectionHeaderForCategory:(id)arg1 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 categories:(id)arg3 ;
@end

