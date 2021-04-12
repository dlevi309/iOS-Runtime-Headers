/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class PETEventTracker2;

@interface WFEventTracker : NSObject {

	PETEventTracker2* _proactiveTracker;

}

@property (nonatomic,readonly) PETEventTracker2 * proactiveTracker;              //@synthesize proactiveTracker=_proactiveTracker - In the implementation block
+(id)sharedTracker;
-(id)init;
-(void)trackEvent:(id)arg1 ;
-(id)initWithTracker:(id)arg1 ;
-(void)trackEvent:(id)arg1 count:(int)arg2 ;
-(PETEventTracker2 *)proactiveTracker;
@end

