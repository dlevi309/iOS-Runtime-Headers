/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKPeripheralAvailabilityManager_iOS : NSObject {

	IOHIDManagerRef stylusHidManager;
	unsigned long long _currentAvailability;

}

@property (assign) unsigned long long currentAvailability;              //@synthesize currentAvailability=_currentAvailability - In the implementation block
+(BOOL)onlyDrawWithApplePencil;
-(id)init;
-(void)dealloc;
-(void)teardown;
-(void)stopMonitoringForPeripheralConnection;
-(void)postConnectionStatusNotification;
-(void)startMonitoringForPeripheralConnection;
-(unsigned long long)currentAvailability;
-(void)setCurrentAvailability:(unsigned long long)arg1 ;
@end

