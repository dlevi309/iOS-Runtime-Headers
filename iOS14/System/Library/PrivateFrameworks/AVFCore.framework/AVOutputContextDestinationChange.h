/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputContextDestinationChangeInternal, NSString;

@interface AVOutputContextDestinationChange : NSObject {

	AVOutputContextDestinationChangeInternal* _ivars;

}

@property (readonly) long long status; 
@property (readonly) NSString * cancellationReason; 
-(void)markAsFinished;
-(id)init;
-(void)markAsFailed;
-(void)markAsCancelledWithReason:(id)arg1 ;
-(void)_setStatus:(long long)arg1 cancellationReason:(id)arg2 ;
-(void)markAsInProgress;
-(void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(CFStringRef)arg1 ;
-(void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(CFStringRef)arg1 ;
-(id)description;
-(NSString *)cancellationReason;
-(long long)status;
-(void)dealloc;
@end

