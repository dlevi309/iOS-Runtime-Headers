/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CLLocationMatchInfo, _CLLocationGroundAltitude, NSData, NSDate, CLFloor;

@interface CLLocation : NSObject <CKRecordValue, INJSONSerializable, NSCopying, NSSecureCoding> {

	id _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationMatchInfo * matchInfo; 
@property (nonatomic,readonly) _CLLocationGroundAltitude * _groundAltitude; 
@property (nonatomic,readonly) SCD_Struct_CL24 clientLocation; 
@property (nonatomic,readonly) NSString * iso6709Notation; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSData * coarseMetaData; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) CLLocationCoordinate2D rawCoordinate; 
@property (nonatomic,readonly) double rawHorizontalAccuracy; 
@property (nonatomic,readonly) double rawCourse; 
@property (nonatomic,readonly) double rawCourseAccuracy; 
@property (nonatomic,readonly) unsigned integrity; 
@property (nonatomic,readonly) double trustedTimestamp; 
@property (nonatomic,readonly) BOOL isAltitudeWgs84Available; 
@property (nonatomic,readonly) double altitudeWgs84; 
@property (getter=isCoordinateFused,nonatomic,readonly) BOOL coordinateFused; 
@property (nonatomic,readonly) int signalEnvironmentType; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,readonly) double courseAccuracy; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) double speedAccuracy; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) CLFloor * floor; 
+(id)CKDPLocationCoordinateFromCLLocation:(id)arg1 ;
+(id)CKLocationFromPLocationCoordinate:(id)arg1 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(BOOL)supportsSecureCoding;
+(double)rangeForTransmitPower:(double)arg1 ;
+(id)filterOutliers:(id)arg1 options:(id)arg2 ;
+(double)rangeForReductiveFilterOptions:(id)arg1 ;
+(id)deriveLocationFromLocations:(id)arg1 options:(id)arg2 ;
+(id)filterOutliers:(id)arg1 ;
+(id)locationByReductivelyFilteringLocations:(id)arg1 options:(id)arg2 ;
+(id)deriveLocationFromLocations:(id)arg1 ;
+(id)locationByReductivelyFilteringLocations:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(double)course;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 ;
-(CLFloor *)floor;
-(double)altitude;
-(SCD_Struct_CL24)clientLocation;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 ;
-(id)init;
-(double)distanceFromLocation:(id)arg1 ;
-(double)speed;
-(double)speedAccuracy;
-(CLLocationCoordinate2D)coordinate;
-(double)verticalAccuracy;
-(CLLocationMatchInfo *)matchInfo;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)_initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 floor:(int)arg10 ;
-(void)unmatch;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 ;
-(int)referenceFrame;
-(CLLocationCoordinate2D)rawCoordinate;
-(id)_initWithRTLocation:(id)arg1 ;
-(double)altitudeWgs84;
-(BOOL)isAltitudeWgs84Available;
-(unsigned)integrity;
-(BOOL)isCoordinateFused;
-(NSString *)description;
-(NSData *)coarseMetaData;
-(void)setReferenceFrame:(int)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 ;
-(double)getDistanceFrom:(id)arg1 ;
-(id)jsonObject;
-(double)rawCourseAccuracy;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(double)rawHorizontalAccuracy;
-(double)trustedTimestamp;
-(int)signalEnvironmentType;
-(id)snapToResolution:(double)arg1 ;
-(id)propagateLocationToTime:(double)arg1 ;
-(NSString *)iso6709Notation;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(double)courseAccuracy;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 coarseMetaData:(id)arg2 ;
-(double)rawCourse;
-(double)horizontalAccuracy;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 clientLocationPrivate:(SCD_Struct_CL29)arg2 coarseMetaData:(id)arg3 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 coarseMetaData:(id)arg8 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 fusionInfo:(id)arg5 rawHorizontalAccuracy:(double)arg6 rawCourseAccuracy:(double)arg7 ;
-(_CLLocationGroundAltitude *)_groundAltitude;
-(void)dealloc;
-(id)initWithClientLocation:(SCD_Struct_CL24)arg1 clientLocationPrivate:(SCD_Struct_CL29)arg2 ;
@end

