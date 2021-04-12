/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSensorRecorderInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	CLConnectionClient* fLocationdConnection;

}
-(id)init;
-(void)dealloc;
-(void)teardown;
-(id)newMetaSinceID:(unsigned long long)arg1 forType:(int)arg2 ;
-(id)newMetaFrom:(double)arg1 to:(double)arg2 forType:(int)arg3 ;
-(id)newMetaByID:(unsigned long long)arg1 forType:(int)arg2 ;
-(id)newDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 forType:(int)arg3 ;
-(id)_newMetaUsingMessage:(const char*)arg1 withIdentifier:(unsigned long long)arg2 forType:(int)arg3 ;
-(BOOL)writeSensorDataToFile:(id)arg1 from:(double)arg2 to:(double)arg3 forType:(int)arg4 ;
-(BOOL)setSensorSampleRate:(unsigned)arg1 forType:(int)arg2 ;
@end

