/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMAltimeterInternal;

@interface CMElevation : NSObject {

	CMAltimeterInternal* _internal;

}

@property (nonatomic,readonly) CMAltimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isElevationAvailable;
-(id)init;
-(void)dealloc;
-(CMAltimeterInternal *)_internal;
-(void)startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopElevationUpdates;
@end

