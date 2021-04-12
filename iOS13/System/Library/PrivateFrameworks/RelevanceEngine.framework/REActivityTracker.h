/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REActivityTrackerDelegate;
#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSCountedSet, NSMapTable, NSSet;

@interface REActivityTracker : NSObject {

	SCD_Struct_RE29 delegateCallbacks;
	NSCountedSet* _activities;
	NSMapTable* _activitiesByObject;
	id<REActivityTrackerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<REActivityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * outstandingActivities; 
-(id<REActivityTrackerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)beginActivity:(id)arg1 forObject:(id)arg2 ;
-(void)endActivity:(id)arg1 forObject:(id)arg2 ;
-(void)trackObject:(id)arg1 ;
-(void)withdrawObject:(id)arg1 ;
-(NSSet *)outstandingActivities;
-(id)outstandingActivitiesForObject:(id)arg1 ;
-(BOOL)trackingObject:(id)arg1 ;
@end

