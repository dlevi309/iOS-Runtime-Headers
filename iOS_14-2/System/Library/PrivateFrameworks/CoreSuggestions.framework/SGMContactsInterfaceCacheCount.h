/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@class PETDistributionEventTracker;

@interface SGMContactsInterfaceCacheCount : NSObject {

	PETDistributionEventTracker* _tracker;

}

@property (nonatomic,readonly) PETDistributionEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(double)arg1 ;
-(PETDistributionEventTracker *)tracker;
@end

