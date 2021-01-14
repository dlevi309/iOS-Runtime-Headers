/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol AXAssertionCoordinatorDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSHashTable;

@interface AXAssertionCoordinator : NSObject {

	id<AXAssertionCoordinatorDelegate> _delegate;
	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSHashTable* _assertions;

}

@property (assign,nonatomic,__weak) id<AXAssertionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> assertionQueue;                     //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * assertions;                                        //@synthesize assertions=_assertions - In the implementation block
-(NSHashTable *)assertions;
-(id<AXAssertionCoordinatorDelegate>)delegate;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<AXAssertionCoordinatorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)_stopTrackingPoorMansAssertion:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg1 ;
-(id)acquireAssertionWithReason:(id)arg1 ;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAssertions:(NSHashTable *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

