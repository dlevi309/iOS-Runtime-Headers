/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKDevice.h>

@interface BKDeviceTouchID : BKDevice
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(id)createExtendEnrollTouchIDOperationWithError:(id*)arg1 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(BOOL)enableBackgroundFingerDetection:(BOOL)arg1 error:(id*)arg2 ;
@end

