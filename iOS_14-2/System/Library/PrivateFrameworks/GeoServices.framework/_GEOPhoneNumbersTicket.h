/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray;

@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {

	NSArray* _phoneNumbers;
	BOOL _allowCellularDataForLookup;

}
-(id)description;
-(id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(SCD_Struct_GE91)dataRequestKind;
@end

