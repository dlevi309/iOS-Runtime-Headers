/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@class NSError;

@interface HDSPSleepScheduleModelSaveResult : NSObject {

	BOOL _success;
	BOOL _shouldNotify;
	NSError* _error;

}

@property (nonatomic,readonly) BOOL success;                   //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL shouldNotify;              //@synthesize shouldNotify=_shouldNotify - In the implementation block
+(id)emptyResult;
+(id)saveFailedWithError:(id)arg1 ;
-(BOOL)success;
-(BOOL)shouldNotify;
-(NSError *)error;
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 shouldNotify:(BOOL)arg3 ;
@end

