/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject {

	CMHealthTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMHealthTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isMetMinutesAvailable;
+(long long)isAuthorizedForMetMinutes;
+(BOOL)isVO2MaxDataAvailable;
+(long long)isAuthorizedForVO2MaxData;
-(id)init;
-(void)dealloc;
-(CMHealthTrackerInternal *)_internal;
-(void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

