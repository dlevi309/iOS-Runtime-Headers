/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMWorkoutMetsInternal;

@interface CMWorkoutMets : NSObject {

	CMWorkoutMetsInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutMetsInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMWorkoutMetsInternal *)_internal;
-(id)init;
-(void)queryWorkoutMetsWithSessionId:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

