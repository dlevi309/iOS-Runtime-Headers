/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

