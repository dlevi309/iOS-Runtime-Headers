/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface SHEntitlements : NSObject {

	BOOL _isEntitledForSignatureGeneration;
	BOOL _isEntitledForStorefront;
	BOOL _isEntitledForMicrophone;
	BOOL _isEntitledForRemoteRecognition;
	BOOL _isEntitledForExternalAudioRecording;
	BOOL _isEntitledForInternalAudioRecording;
	BOOL _isEntitledForControlCenterModuleAccess;

}

@property (assign,nonatomic) BOOL isEntitledForSignatureGeneration;                      //@synthesize isEntitledForSignatureGeneration=_isEntitledForSignatureGeneration - In the implementation block
@property (assign,nonatomic) BOOL isEntitledForStorefront;                               //@synthesize isEntitledForStorefront=_isEntitledForStorefront - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForMicrophone;                             //@synthesize isEntitledForMicrophone=_isEntitledForMicrophone - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForRemoteRecognition;                      //@synthesize isEntitledForRemoteRecognition=_isEntitledForRemoteRecognition - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForExternalAudioRecording;                 //@synthesize isEntitledForExternalAudioRecording=_isEntitledForExternalAudioRecording - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForInternalAudioRecording;                 //@synthesize isEntitledForInternalAudioRecording=_isEntitledForInternalAudioRecording - In the implementation block
@property (nonatomic,readonly) BOOL isEntitledForControlCenterModuleAccess;              //@synthesize isEntitledForControlCenterModuleAccess=_isEntitledForControlCenterModuleAccess - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(void)configureEntitlementsForTask:(SecTaskRef)arg1 ;
-(void)configureEntitlementsForConnection:(id)arg1 ;
-(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromSecTask:(SecTaskRef)arg3 ;
-(BOOL)boolValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromConnection:(id)arg3 ;
-(BOOL)boolValueOfEntitlement:(id)arg1 fromConnection:(id)arg2 ;
-(void*)copyValueOfEntitlement:(id)arg1 fromSecTask:(SecTaskRef)arg2 ;
-(BOOL)isEntitledForSignatureGeneration;
-(void)setIsEntitledForSignatureGeneration:(BOOL)arg1 ;
-(BOOL)isEntitledForStorefront;
-(void)setIsEntitledForStorefront:(BOOL)arg1 ;
-(BOOL)isEntitledForMicrophone;
-(BOOL)isEntitledForRemoteRecognition;
-(BOOL)isEntitledForExternalAudioRecording;
-(BOOL)isEntitledForInternalAudioRecording;
-(BOOL)isEntitledForControlCenterModuleAccess;
@end

