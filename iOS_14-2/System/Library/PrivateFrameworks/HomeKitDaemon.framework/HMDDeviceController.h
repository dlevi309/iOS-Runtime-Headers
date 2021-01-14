/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)logCategory;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(id<HMDDeviceControllerDelegate>)delegate;
-(id)logIdentifier;
-(HMDDevice *)device;
-(void)setDelegate:(id<HMDDeviceControllerDelegate>)arg1 ;
-(id)attributeDescriptions;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)updateWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

