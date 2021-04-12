/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/FBSWorkspaceFencing.h>

@class BSAtomicFlag, NSString;

@interface _UISimpleFenceProvider : NSObject <FBSWorkspaceFencing> {

	BSAtomicFlag* _trackingAny;
	BOOL _synchronizing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)requestSystemAnimationFence;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(BOOL)isTrackingAnySystemAnimationFence;
@end

