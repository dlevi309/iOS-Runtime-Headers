/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARDictionaryCoding.h>
#import <ARKit/ARMetadataWrapperCoding.h>
#import <ARKit/ARSensorData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString;

@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, NSSecureCoding> {

	double _timestamp;
	CLLocation* _location;

}

@property (nonatomic,readonly) CLLocation * location;               //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(CLLocation *)location;
-(void)setTimestamp:(double)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(id)encodeToDictionary;
-(id)encodeToMetadataWrapper;
-(id)initWithMetadataWrapper:(id)arg1 ;
@end

