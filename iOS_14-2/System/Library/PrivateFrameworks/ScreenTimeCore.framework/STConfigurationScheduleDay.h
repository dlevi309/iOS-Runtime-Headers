/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents;

@interface STConfigurationScheduleDay : NSObject <NSCopying, NSSecureCoding> {

	NSDateComponents* _startTime;
	NSDateComponents* _endTime;
	unsigned long long _weekday;

}

@property (readonly) NSDateComponents * startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (readonly) NSDateComponents * endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (readonly) unsigned long long weekday;                //@synthesize weekday=_weekday - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)weekday;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDateComponents *)endTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDateComponents *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 endTime:(id)arg2 weekday:(unsigned long long)arg3 ;
-(BOOL)isEqualToConfigurationScheduleDay:(id)arg1 ;
@end

