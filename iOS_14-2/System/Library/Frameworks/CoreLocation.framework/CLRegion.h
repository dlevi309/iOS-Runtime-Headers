/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLRegionInternal, NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {

	CLRegionInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_CL11 clientRegion; 
@property (nonatomic,copy) NSString * onBehalfOfBundleId; 
@property (assign,nonatomic) BOOL conservativeEntry; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL emergency; 
@property (nonatomic,readonly) CLLocationCoordinate2D center; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (assign,nonatomic) BOOL notifyOnEntry; 
@property (assign,nonatomic) BOOL notifyOnExit; 
+(BOOL)supportsSecureCoding;
-(NSString *)onBehalfOfBundleId;
-(id)initCircularRegionWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(CLLocationCoordinate2D)center;
-(void)_encodeWithCoder:(id)arg1 ;
-(void)setConservativeEntry:(BOOL)arg1 ;
-(BOOL)emergency;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithCoder:(id)arg1 ;
-(BOOL)notifyOnEntry;
-(BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)notifyOnExit;
-(int)referenceFrame;
-(void)setOnBehalfOfBundleId:(NSString *)arg1 ;
-(void)setEmergency:(BOOL)arg1 ;
-(id)initWithClientRegion:(SCD_Struct_CL11)arg1 ;
-(double)radius;
-(id)description;
-(BOOL)conservativeEntry;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setNotifyOnExit:(BOOL)arg1 ;
-(SCD_Struct_CL11)clientRegion;
-(void)setNotifyOnEntry:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

