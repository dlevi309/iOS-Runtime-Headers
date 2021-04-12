/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) RTLocation * startLocation;              //@synthesize startLocation=_startLocation - In the implementation block
@property (readonly) RTLocation * endLocation;                //@synthesize endLocation=_endLocation - In the implementation block
@property (readonly) NSArray * expectedVisits;                //@synthesize expectedVisits=_expectedVisits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)visitsDescriptionDataAtPath:(id)arg1 ;
+(id)getVisitsFromVisitsDescriptionData:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(RTLocation *)startLocation;
-(RTLocation *)endLocation;
-(id)initWithStartLocation:(id)arg1 endLocation:(id)arg2 expectedVisits:(id)arg3 ;
-(id)initWithVisitsDescriptionPListPath:(id)arg1 ;
-(NSArray *)expectedVisits;
@end

