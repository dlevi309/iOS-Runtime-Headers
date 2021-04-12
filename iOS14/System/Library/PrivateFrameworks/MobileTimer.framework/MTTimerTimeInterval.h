/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTTimerTime.h>

@class NSString;

@interface MTTimerTimeInterval : NSObject <MTDictionarySerializable, MTTimerTime> {

	double _remainingTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double remainingTime;                //@synthesize remainingTime=_remainingTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(double)remainingTime;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToTime:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

