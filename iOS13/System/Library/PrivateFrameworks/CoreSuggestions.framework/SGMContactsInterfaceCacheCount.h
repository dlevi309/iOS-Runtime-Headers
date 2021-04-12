/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@class PETDistributionEventTracker;

@interface SGMContactsInterfaceCacheCount : NSObject {

	PETDistributionEventTracker* _tracker;

}

@property (nonatomic,readonly) PETDistributionEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETDistributionEventTracker *)tracker;
-(void)trackEventWithScalar:(double)arg1 ;
@end

