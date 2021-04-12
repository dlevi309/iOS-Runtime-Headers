/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/

#import <BiometricKit/BKDevice.h>

@interface BKDeviceTouchID : BKDevice
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(id)createExtendEnrollTouchIDOperationWithError:(id*)arg1 ;
-(BOOL)enableBackgroundFingerDetection:(BOOL)arg1 error:(id*)arg2 ;
@end

