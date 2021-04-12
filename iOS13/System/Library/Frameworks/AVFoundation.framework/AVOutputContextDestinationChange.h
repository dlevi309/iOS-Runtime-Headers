/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputContextDestinationChangeInternal, NSString;

@interface AVOutputContextDestinationChange : NSObject {

	AVOutputContextDestinationChangeInternal* _ivars;

}

@property (readonly) long long status; 
@property (readonly) NSString * cancellationReason; 
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)status;
-(void)markAsFinished;
-(NSString *)cancellationReason;
-(void)_setStatus:(long long)arg1 cancellationReason:(id)arg2 ;
-(void)markAsInProgress;
-(void)markAsFailed;
-(void)markAsCancelledWithReason:(id)arg1 ;
-(void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(CFStringRef)arg1 ;
-(void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(CFStringRef)arg1 ;
@end

