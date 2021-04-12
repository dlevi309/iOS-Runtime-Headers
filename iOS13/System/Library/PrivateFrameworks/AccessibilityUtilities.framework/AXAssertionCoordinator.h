/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<AXAssertionCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<AXAssertionCoordinatorDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSHashTable *)assertions;
-(void)setAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stopTrackingPoorMansAssertion:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(void)setAssertions:(NSHashTable *)arg1 ;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)acquireAssertionWithReason:(id)arg1 ;
@end

