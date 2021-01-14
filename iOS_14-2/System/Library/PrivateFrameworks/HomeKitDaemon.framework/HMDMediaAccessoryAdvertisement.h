/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>
#import <libobjc.A.dylib/HMDWACAccessoryAssociation.h>

@protocol HMFLocking;
@class HMDMediaOutputDevice;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {

	id<HMFLocking> _lock;
	BOOL _associated;
	HMDMediaOutputDevice* _outputDevice;

}

@property (retain) HMDMediaOutputDevice * outputDevice;              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (getter=isAssociated) BOOL associated;                     //@synthesize associated=_associated - In the implementation block
+(BOOL)canAirPortExpressSupportMediaAccessory:(id)arg1 ;
-(void)setAssociated:(BOOL)arg1 ;
-(HMDMediaOutputDevice *)outputDevice;
-(BOOL)isAssociated;
-(id)description;
-(long long)associationOptions;
-(id)initWithOutputDevice:(id)arg1 ;
-(void)setOutputDevice:(HMDMediaOutputDevice *)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
-(BOOL)matchesWACDeviceID:(id)arg1 ;
@end

