/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>
#import <libobjc.A.dylib/HMDWACAccessoryAssociation.h>

@protocol OS_dispatch_queue;
@class HMDMediaOutputDevice, NSObject;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {

	BOOL _associated;
	HMDMediaOutputDevice* _outputDevice;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (retain) HMDMediaOutputDevice * outputDevice;                                 //@synthesize outputDevice=_outputDevice - In the implementation block
@property (getter=isAssociated) BOOL associated;                                        //@synthesize associated=_associated - In the implementation block
+(BOOL)canAirPortExpressSupportMediaAccessory:(id)arg1 ;
-(id)description;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(HMDMediaOutputDevice *)outputDevice;
-(id)initWithOutputDevice:(id)arg1 ;
-(BOOL)isAssociated;
-(void)setAssociated:(BOOL)arg1 ;
-(long long)associationOptions;
-(void)setOutputDevice:(HMDMediaOutputDevice *)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
-(BOOL)matchesWACDeviceID:(id)arg1 ;
@end

