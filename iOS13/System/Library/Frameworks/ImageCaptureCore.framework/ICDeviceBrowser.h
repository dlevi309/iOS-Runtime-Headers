/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;
	unsigned long long _browsedDeviceTypeMask;
	NSArray* _devices;

}

@property (assign,nonatomic) NSArray * devices;                           //@synthesize devices=_devices - In the implementation block
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
@property (assign) unsigned long long browsedDeviceTypeMask;              //@synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask - In the implementation block
-(id)init;
-(void)dealloc;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isBrowsing;
-(id)internalDevices;
-(unsigned long long)browsedDeviceTypeMask;
-(void)setBrowsedDeviceTypeMask:(unsigned long long)arg1 ;
@end

