/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
*/

#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@protocol TPSCloudCallingDeviceControllerDelegate;
@class NSArray, NSString;

@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate> {

	BOOL _enabled;
	id<TPSCloudCallingDeviceControllerDelegate> _delegate;
	NSArray* _devices;

}

@property (nonatomic,copy) NSArray * devices;                                                          //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudCallingDeviceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(id)init;
-(id<TPSCloudCallingDeviceControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<TPSCloudCallingDeviceControllerDelegate>)arg1 ;
-(void)didChangeCloudCallingDevices;
@end

