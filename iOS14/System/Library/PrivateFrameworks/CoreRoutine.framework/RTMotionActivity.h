/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface RTMotionActivity : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	unsigned long long _confidence;
	NSDate* _startDate;

}

@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)motionActivityTypeToString:(unsigned long long)arg1 ;
+(id)motionActivityConfidenceToString:(unsigned long long)arg1 ;
-(unsigned long long)confidence;
-(id)init;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 startDate:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

