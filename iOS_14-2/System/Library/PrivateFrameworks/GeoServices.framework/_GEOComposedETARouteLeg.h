/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _GEOComposedETARouteLeg : NSObject <NSSecureCoding> {

	NSArray* _steps;

}

@property (nonatomic,retain) NSArray * steps;                      //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) double travelDuration; 
+(BOOL)supportsSecureCoding;
-(NSArray *)steps;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)travelDuration;
-(id)initWithCoder:(id)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(id)descriptionWithPrecision:(unsigned long long)arg1 ;
@end

