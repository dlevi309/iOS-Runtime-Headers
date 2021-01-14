/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface GEOJunction : NSObject <NSSecureCoding> {

	int _maneuverType;
	int _drivingSide;
	int _junctionType;
	NSData* _elementsData;

}

@property (nonatomic,readonly) int maneuverType;                            //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,readonly) int drivingSide;                             //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) int junctionType;                            //@synthesize junctionType=_junctionType - In the implementation block
@property (nonatomic,readonly) GEOJunctionElement* elements; 
@property (nonatomic,readonly) unsigned long long numElements; 
+(BOOL)supportsSecureCoding;
-(GEOJunctionElement*)elements;
-(unsigned long long)numElements;
-(void)encodeWithCoder:(id)arg1 ;
-(int)maneuverType;
-(id)initWithCoder:(id)arg1 ;
-(int)junctionType;
-(id)initWithStep:(id)arg1 ;
-(id)initWithManeuverType:(int)arg1 drivingSide:(int)arg2 ;
-(id)initWithJunctionInfo:(id)arg1 ;
-(int)drivingSide;
@end

