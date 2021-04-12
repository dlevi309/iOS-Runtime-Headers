/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CLLocationMatchInfo, _CLLocationGroundAltitude, NSDate, CLFloor;

@interface CLLocation : NSObject <CKRecordValue, INJSONSerializable, NSCopying, NSSecureCoding> {

	id _internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationMatchInfo * matchInfo; 
@property (nonatomic,readonly) _CLLocationGroundAltitude * _groundAltitude; 
@property (nonatomic,readonly) SCD_Struct_CL16 clientLocation; 
@property (nonatomic,readonly) NSString * iso6709Notation; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) CLLocationCoordinate2D rawCoordinate; 
@property (nonatomic,readonly) double rawCourse; 
@property (nonatomic,readonly) unsigned integrity; 
@property (nonatomic,readonly) double trustedTimestamp; 
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
+(id)filterOutliers:(id)arg1 ;
+(id)deriveLocationFromLocations:(id)arg1 ;
+(id)locationByReductivelyFilteringLocations:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSDate *)timestamp;
-(double)distanceFromLocation:(id)arg1 ;
-(double)altitude;
-(id)shortDescription;
-(double)speed;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 ;
-(void)unmatch;
-(SCD_Struct_CL16)clientLocation;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 clientLocationPrivate:(SCD_Struct_CL25)arg2 ;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 ;
-(double)getDistanceFrom:(id)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)_initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 floor:(int)arg10 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 courseAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 timestamp:(id)arg9 ;
-(id)jsonObject;
-(CLLocationCoordinate2D)rawCoordinate;
-(double)verticalAccuracy;
-(double)speedAccuracy;
-(double)course;
-(double)courseAccuracy;
-(double)rawCourse;
-(unsigned)integrity;
-(double)trustedTimestamp;
-(int)signalEnvironmentType;
-(CLFloor *)floor;
-(id)snapToResolution:(double)arg1 ;
-(id)propagateLocationToTime:(double)arg1 ;
-(NSString *)iso6709Notation;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 ;
-(id)initWithClientLocation:(SCD_Struct_CL16)arg1 matchInfo:(id)arg2 ;
-(CLLocationMatchInfo *)matchInfo;
-(_CLLocationGroundAltitude *)_groundAltitude;
@end

