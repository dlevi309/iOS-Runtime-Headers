/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, _SUAutoInstallForecastDateCache;

@interface SUAutoInstallForecast : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _unlockStartDate;
	NSDate* _unlockEndDate;
	NSDate* _suStartDate;
	NSDate* _suEndDate;
	NSDate* _firstUnlock;
	_SUAutoInstallForecastDateCache* _lazy_forecastDateCache;

}

@property (nonatomic,retain) NSDate * unlockStartDate;              //@synthesize unlockStartDate=_unlockStartDate - In the implementation block
@property (nonatomic,retain) NSDate * unlockEndDate;                //@synthesize unlockEndDate=_unlockEndDate - In the implementation block
@property (nonatomic,retain) NSDate * suStartDate;                  //@synthesize suStartDate=_suStartDate - In the implementation block
@property (nonatomic,retain) NSDate * suEndDate;                    //@synthesize suEndDate=_suEndDate - In the implementation block
@property (nonatomic,retain) NSDate * firstUnlock;                  //@synthesize firstUnlock=_firstUnlock - In the implementation block
@property (nonatomic,readonly) long long scheduleType; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_calendar;
-(NSDate *)suEndDate;
-(BOOL)_isDateExpired:(id)arg1 ;
-(NSDate *)suStartDate;
-(long long)scheduleType;
-(void)setUnlockStartDate:(NSDate *)arg1 ;
-(void)setUnlockEndDate:(NSDate *)arg1 ;
-(void)setSuStartDate:(NSDate *)arg1 ;
-(void)setSuEndDate:(NSDate *)arg1 ;
-(void)setFirstUnlock:(NSDate *)arg1 ;
-(id)_forecastDateCache;
-(NSDate *)unlockStartDate;
-(NSDate *)unlockEndDate;
-(NSDate *)firstUnlock;
-(BOOL)_isForecastLogicallyExpired;
-(id)_roundedStartTime;
-(id)_roundedEndTime;
@end

