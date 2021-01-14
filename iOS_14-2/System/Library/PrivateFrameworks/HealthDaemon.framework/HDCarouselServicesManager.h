/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)init;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg1 ;
-(id)takeSessionAssertionForOwnerIdentifier:(id)arg1 supportsAOT:(BOOL)arg2 ;
-(id)takeDisableAOTAssertionForOwnerIdentifier:(id)arg1 ;
@end

