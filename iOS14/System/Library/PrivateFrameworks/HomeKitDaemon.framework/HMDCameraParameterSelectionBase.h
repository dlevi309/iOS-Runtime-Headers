/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCameraStreamSessionID, NSString;

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging> {

	HMDCameraStreamSessionID* _sessionID;

}

@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(id)initWithSessionID:(id)arg1 ;
-(id)_filterFor:(id)arg1 preferenceList:(id)arg2 deviceSupportedTypes:(id)arg3 cameraSupportedTypes:(id)arg4 localPreferences:(id)arg5 ;
-(id)_selectSRTPParameters:(id)arg1 ;
-(id)_selectCryptoSuite:(id)arg1 ;
@end

