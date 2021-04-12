/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFInterstitialProviderDelegate;
@class NSObject, AFInterstitialConfiguration, NSMutableArray, NSString;

@interface AFInterstitialProvider : NSObject <AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	AFInterstitialConfiguration* _configuration;
	NSMutableArray* _pendingActions;
	id _context;
	id<AFInterstitialProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id)initWithStyle:(long long)arg1 recordRoute:(id)arg2 isVoiceTrigger:(BOOL)arg3 isDucking:(BOOL)arg4 isTwoShot:(BOOL)arg5 speechEndHostTime:(unsigned long long)arg6 context:(id)arg7 delegate:(id)arg8 ;
-(void)_performNextAction;
@end

