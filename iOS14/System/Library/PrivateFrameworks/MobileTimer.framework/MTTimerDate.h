/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTTimerTime.h>

@class NSDate, NSString;

@interface MTTimerDate : NSObject <MTDictionarySerializable, MTTimerTime> {

	NSDate* _date;
	/*^block*/id _currentDateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                  //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) double remainingTime; 
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)setCurrentDateProvider:(id)arg1 ;
-(double)remainingTime;
-(id)initWithDate:(id)arg1 currentDateProvider:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)currentDateProvider;
-(BOOL)isEqualToTime:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

