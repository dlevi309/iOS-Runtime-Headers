/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray, NSString;

@interface _GEOIdentifiersTicket : GEOAbstractMapServiceTicket {

	NSArray* _identifiers;
	int _resultProviderID;
	NSString* _contentProvider;
	unsigned long long _options;

}
-(id)description;
-(id)initWithTraits:(id)arg1 ;
-(SCD_Struct_GE2)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5 ;
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 options:(unsigned long long)arg5 ;
@end

