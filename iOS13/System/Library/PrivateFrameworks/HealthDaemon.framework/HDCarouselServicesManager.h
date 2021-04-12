/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HDAssertionManager, NSString;

@interface HDCarouselServicesManager : NSObject <HDAssertionObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg1 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg1 supportsAOT:(BOOL)arg2 ;
-(id)takeDisableAOTAssertionForOwnerIdentifier:(id)arg1 ;
@end

