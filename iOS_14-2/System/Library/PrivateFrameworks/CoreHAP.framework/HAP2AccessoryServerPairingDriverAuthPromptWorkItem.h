/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem {

	unsigned long long _permissionType;
	NSError* _cancelError;

}

@property (nonatomic,readonly) unsigned long long permissionType;              //@synthesize permissionType=_permissionType - In the implementation block
@property (nonatomic,retain) NSError * cancelError;                            //@synthesize cancelError=_cancelError - In the implementation block
+(id)promptForType:(unsigned long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(void)setCancelError:(NSError *)arg1 ;
-(id)description;
-(NSError *)cancelError;
-(unsigned long long)permissionType;
-(void)runForPairingDriver:(id)arg1 ;
-(id)initWithPermissionType:(unsigned long long)arg1 ;
@end

