/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSString, HMBLocalZone, NSObject, NSUUID;

@interface HMDCameraClipImporter : HMFObject <HMFLogging> {

	NSString* _logIdentifier;
	HMBLocalZone* _localZone;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _cameraProfileUUID;

}

@property (readonly) HMBLocalZone * localZone;                            //@synthesize localZone=_localZone - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * logIdentifier;                            //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (copy,readonly) NSUUID * cameraProfileUUID;                     //@synthesize cameraProfileUUID=_cameraProfileUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)logIdentifier;
-(NSUUID *)cameraProfileUUID;
-(HMBLocalZone *)localZone;
-(id)initWithLocalZone:(id)arg1 cameraProfileUUID:(id)arg2 ;
-(id)importClipsWithImportData:(id)arg1 ;
@end

