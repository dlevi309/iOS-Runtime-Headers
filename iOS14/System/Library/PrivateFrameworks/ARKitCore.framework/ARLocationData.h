/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARDictionaryCoding.h>
#import <ARKitCore/ARMetadataWrapperCoding.h>
#import <ARKitCore/ARSensorData.h>
#import <ARKitCore/ARDaemonSecureCoding.h>

@class CLLocation, NSString;

@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding> {

	BOOL _secure;
	double _timestamp;
	CLLocation* _location;
	 _locationLLA;
	 _locationECEF;
	SCD_Struct_AR1 _ecefFromlocation;

}

@property (getter=isSecure,nonatomic,readonly) BOOL secure;                  //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly)  locationLLA;                                 //@synthesize locationLLA=_locationLLA - In the implementation block
@property (nonatomic,readonly)  locationECEF;                                //@synthesize locationECEF=_locationECEF - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 ecefFromlocation;              //@synthesize ecefFromlocation=_ecefFromlocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isSecure;
-(double)timestamp;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
-()locationLLA;
-()locationECEF;
-(SCD_Struct_AR1)ecefFromlocation;
-(2)enuFromLocation:(id)arg1 ;
@end

