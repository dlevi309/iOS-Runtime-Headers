/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDDeviceSetupServerSession : HMDDeviceSetupSessionInternal <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)role;
+(id)allowedClasses;
+(BOOL)isSupported;
+(id)logCategory;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

