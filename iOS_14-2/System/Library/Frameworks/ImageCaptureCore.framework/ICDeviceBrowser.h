/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/


@class NSArray;

@interface ICDeviceBrowser : NSObject {

	id _privateData;
	unsigned long long _browsedDeviceTypeMask;
	NSArray* _devices;

}

@property (assign,nonatomic) NSArray * devices;                              //@synthesize devices=_devices - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@property (assign) id<ICDeviceBrowserDelegate> delegate; 
@property (getter=isBrowsing,readonly) BOOL browsing; 
@property (assign) unsigned long long browsedDeviceTypeMask;                 //@synthesize browsedDeviceTypeMask=_browsedDeviceTypeMask - In the implementation block
-(NSArray *)devices;
-(id)internalDevices;
-(BOOL)isBrowsing;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isSuspended;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(id<ICDeviceBrowserDelegate>)delegate;
-(void)start;
-(BOOL)suspended;
-(id)controlAuthorizationStatus;
-(void)requestControlAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(id)contentsAuthorizationStatus;
-(void)stop;
-(void)setDelegate:(id<ICDeviceBrowserDelegate>)arg1 ;
-(void)requestContentsAuthorizationWithCompletion:(/*^block*/id)arg1 ;
-(void)setBrowsedDeviceTypeMask:(unsigned long long)arg1 ;
-(unsigned long long)browsedDeviceTypeMask;
-(void)dealloc;
@end

