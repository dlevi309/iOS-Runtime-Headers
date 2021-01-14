/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)teardown;
-(void)dealloc;
-(void)stopMonitoringForPeripheralConnection;
-(void)postConnectionStatusNotification;
-(void)startMonitoringForPeripheralConnection;
-(unsigned long long)currentAvailability;
-(void)setCurrentAvailability:(unsigned long long)arg1 ;
@end

