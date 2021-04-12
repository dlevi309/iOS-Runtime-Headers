/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol OS_dispatch_queue;
#import <HealthUI/HealthUI-Structs.h>
@class NSObject;

@interface HKCoreTelephonyUtilities : NSObject {

	CTServerConnectionRef _ctServerConnection;
	NSObject*<OS_dispatch_queue> _ctServerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ctServerQueue;              //@synthesize ctServerQueue=_ctServerQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(CTServerConnectionRef)ctServerConnection;
-(BOOL)isEmergencyServicePhoneNumber:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ctServerQueue;
-(void)setCtServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

