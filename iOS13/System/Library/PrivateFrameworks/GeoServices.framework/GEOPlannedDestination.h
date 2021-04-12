/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)handle;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(int)transportType;
-(NSDate *)arrivalDate;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithMapItemHandle:(id)arg1 ;
@end

