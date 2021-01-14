/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject {

	CMHealthTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMHealthTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(long long)isAuthorizedForMetMinutes;
+(BOOL)isMetMinutesAvailable;
+(BOOL)isVO2MaxDataAvailable;
+(long long)isAuthorizedForVO2MaxData;
-(CMHealthTrackerInternal *)_internal;
-(id)init;
-(void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

