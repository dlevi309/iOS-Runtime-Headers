/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTLocation, NSArray;

@interface RTSignalGeneratorOptions : NSObject <NSCopying, NSSecureCoding> {

	RTLocation* _startLocation;
	RTLocation* _endLocation;
	NSArray* _expectedVisits;

}

@property (nonatomic,readonly) RTLocation * startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,readonly) RTLocation * endLocation;                //@synthesize endLocation=_endLocation - In the implementation block
@property (nonatomic,readonly) NSArray * expectedVisits;                //@synthesize expectedVisits=_expectedVisits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)visitsDescriptionDataAtPath:(id)arg1 ;
+(id)getVisitsFromVisitsDescriptionData:(id)arg1 ;
-(id)init;
-(RTLocation *)endLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(RTLocation *)startLocation;
-(id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 expectedVisits:(id)arg3 ;
-(id)initWithVisitsDescriptionPListPath:(id)arg1 ;
-(NSArray *)expectedVisits;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

