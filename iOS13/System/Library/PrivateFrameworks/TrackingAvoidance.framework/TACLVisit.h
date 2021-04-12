/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/TAEventProtocol.h>

@class NSDate, NSString;

@interface TACLVisit : NSObject <OSLogCoding, TAEventProtocol> {

	NSDate* _arrivalDate;
	NSDate* _departureDate;
	double _horizontalAccuracy;
	NSDate* _detectionDate;
	unsigned long long _confidence;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,copy,readonly) NSDate * arrivalDate;                      //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * departureDate;                    //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) BOOL hasArrivalDate; 
@property (nonatomic,readonly) BOOL hasDepartureDate; 
@property (nonatomic,readonly) BOOL isTemporalOrderSensical; 
@property (nonatomic,copy,readonly) NSDate * detectionDate;                    //@synthesize detectionDate=_detectionDate - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(unsigned long long)confidence;
-(double)horizontalAccuracy;
-(NSDate *)arrivalDate;
-(NSDate *)departureDate;
-(NSDate *)detectionDate;
-(BOOL)hasArrivalDate;
-(BOOL)hasDepartureDate;
-(id)descriptionDictionary;
-(id)getDate;
-(BOOL)isTemporalOrderSensical;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5 confidence:(unsigned long long)arg6 ;
@end

