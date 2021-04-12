/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@protocol OS_dispatch_queue;
@class DNDEventBehaviorResolutionService, NSObject, EFFuture;

@interface _MFSoundBehaviorOverridesMonitor : NSObject {

	DNDEventBehaviorResolutionService* _dndBehaviorResolutionService;
	NSObject*<OS_dispatch_queue> _dndBehaviorResolutionServiceQueue;
	EFFuture* _behaviorOverrideTypes;

}

@property (readonly) EFFuture * behaviorOverrideTypes;              //@synthesize behaviorOverrideTypes=_behaviorOverrideTypes - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_resolveDNDBehavior;
-(EFFuture *)behaviorOverrideTypes;
@end

