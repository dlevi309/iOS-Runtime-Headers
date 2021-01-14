/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSData;

@interface GEOPlannedDestination : NSObject <NSSecureCoding> {

	NSDate* _arrivalDate;
	NSDate* _expirationDate;
	int _transportType;
	NSData* _handle;

}

@property (nonatomic,retain) NSDate * arrivalDate;                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) int transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSData * handle;                    //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSData *)handle;
-(id)init;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(NSDate *)arrivalDate;
-(id)description;
-(id)initWithMapItemHandle:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
@end

