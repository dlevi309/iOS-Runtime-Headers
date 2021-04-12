/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CLHeading : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double magneticHeading; 
@property (nonatomic,readonly) double trueHeading; 
@property (nonatomic,readonly) double headingAccuracy; 
@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double z; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
+(BOOL)supportsSecureCoding;
-(double)x;
-(double)z;
-(double)y;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(double)magneticHeading;
-(double)trueHeading;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientHeading:(SCD_Struct_CL6)arg1 ;
-(double)headingAccuracy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

