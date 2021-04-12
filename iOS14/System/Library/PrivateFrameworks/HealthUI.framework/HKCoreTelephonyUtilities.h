/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CTServerConnectionRef)ctServerConnection;
-(void)dealloc;
-(BOOL)isEmergencyServicePhoneNumber:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ctServerQueue;
-(void)setCtServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

