/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, HMDDeviceControllerDelegate;
@class NSUUID, HMDDevice, NSString;

@interface HMDDeviceController : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	NSUUID* _identifier;
	HMDDevice* _device;
	id<HMDDeviceControllerDelegate> _delegate;

}

@property (__weak) id<HMDDeviceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDDevice * device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(id<HMDDeviceControllerDelegate>)delegate;
-(void)setDelegate:(id<HMDDeviceControllerDelegate>)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)updateWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

