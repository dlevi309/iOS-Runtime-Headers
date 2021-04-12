/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@protocol OS_dispatch_queue;
@class NSPointerArray, NSObject, NSArray;

@interface MRExternalDeviceManager : NSObject {

	NSPointerArray* _devicesPointerArray;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,readonly) NSArray * allDevices; 
+(id)sharedManager;
-(id)init;
-(NSArray *)allDevices;
-(id)deviceWithIdentifier:(id)arg1 ;
-(void)clearDevices;
-(void)registerDevice:(id)arg1 ;
@end

