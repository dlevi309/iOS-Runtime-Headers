/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSSecureCodingNSCopying;
@class NSObject;

@interface PVTimedObject : NSObject <NSSecureCoding, NSCopying> {

	NSObject*<NSSecureCoding>*<NSCopying> _object;
	SCD_Struct_PV22 _time;

}

@property (assign,nonatomic) SCD_Struct_PV22 time;                                      //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSObject*<NSSecureCoding>*<NSCopying> object;              //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)findTimedObjectInSortedArray:(id)arg1 atTime:(SCD_Struct_PV22)arg2 returnFirstObjectForTimeBeforeFirst:(BOOL)arg3 returnLastObjectForTimeAfterLast:(BOOL)arg4 ;
+(id)timedObjectWithTime:(SCD_Struct_PV22)arg1 object:(id)arg2 ;
+(id)timedObjectWithTime:(SCD_Struct_PV22)arg1 ;
-(SCD_Struct_PV22)time;
-(void)setTime:(SCD_Struct_PV22)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<NSSecureCoding>*<NSCopying>)object;
-(void)setObject:(NSObject*<NSSecureCoding>*<NSCopying>)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTime:(SCD_Struct_PV22)arg1 ;
-(id)initWithTime:(SCD_Struct_PV22)arg1 object:(id)arg2 ;
@end

