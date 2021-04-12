/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(CLLocationCoordinate2D)center;
-(double)radius;
-(SCD_Struct_CL11)clientRegion;
-(id)initWithClientRegion:(SCD_Struct_CL11)arg1 ;
-(NSString *)onBehalfOfBundleId;
-(id)initCircularRegionWithCenter:(CLLocationCoordinate2D)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)_initWithCoder:(id)arg1 ;
-(void)_encodeWithCoder:(id)arg1 ;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setOnBehalfOfBundleId:(NSString *)arg1 ;
-(BOOL)notifyOnEntry;
-(void)setNotifyOnEntry:(BOOL)arg1 ;
-(BOOL)notifyOnExit;
-(void)setNotifyOnExit:(BOOL)arg1 ;
-(BOOL)containsCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setConservativeEntry:(BOOL)arg1 ;
-(BOOL)conservativeEntry;
-(void)setEmergency:(BOOL)arg1 ;
-(BOOL)emergency;
@end

