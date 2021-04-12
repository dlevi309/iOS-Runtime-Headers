/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMDDevice, NSMutableDictionary;

@interface HMDCameraSessionID : HMFObject <NSCopying> {

	BOOL _spiClient;
	NSString* _sessionID;
	NSString* _descriptionString;
	NSString* _cameraSessionAppID;
	HMDDevice* _remoteDevice;
	NSMutableDictionary* _milestones;
	NSString* _deviceSectionName;
	NSMutableDictionary* _deviceMilestones;

}

@property (readonly) NSString * sessionID;                                //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) NSString * descriptionString;                        //@synthesize descriptionString=_descriptionString - In the implementation block
@property (readonly) NSString * cameraSessionAppID;                       //@synthesize cameraSessionAppID=_cameraSessionAppID - In the implementation block
@property (readonly) HMDDevice * remoteDevice;                            //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (getter=isSPIClient,readonly) BOOL spiClient;                   //@synthesize spiClient=_spiClient - In the implementation block
@property (readonly) NSMutableDictionary * milestones;                    //@synthesize milestones=_milestones - In the implementation block
@property (readonly) NSString * deviceSectionName;                        //@synthesize deviceSectionName=_deviceSectionName - In the implementation block
@property (readonly) NSMutableDictionary * deviceMilestones;              //@synthesize deviceMilestones=_deviceMilestones - In the implementation block
+(id)millisecondsSince1970;
+(id)applicationIdentiferForMessage:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)descriptionString;
-(NSString *)sessionID;
-(NSMutableDictionary *)milestones;
-(HMDDevice *)remoteDevice;
-(void)setParameterFor:(id)arg1 value:(id)arg2 ;
-(void)addParameterFor:(id)arg1 value:(id)arg2 ;
-(void)markMilestoneFor:(id)arg1 ;
-(NSString *)cameraSessionAppID;
-(void)markMilestoneForPath:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5 ;
-(BOOL)isSPIClient;
-(NSString *)deviceSectionName;
-(void)_prepareDeviceMilestones;
-(NSMutableDictionary *)deviceMilestones;
-(void)setParameterForPath:(id)arg1 value:(id)arg2 ;
@end

