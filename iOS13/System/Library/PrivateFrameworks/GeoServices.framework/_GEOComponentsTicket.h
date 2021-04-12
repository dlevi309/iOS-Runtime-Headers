/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSDictionary, GEOMapItemIdentifier, NSString;

@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket {

	NSDictionary* _components;
	GEOMapItemIdentifier* _identifier;
	int _resultProviderID;
	NSString* _contentProvider;

}
-(id)description;
-(id)initWithTraits:(id)arg1 ;
-(SCD_Struct_GE2)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
@end

