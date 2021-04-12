/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BKSProcessAssertion, NSString;

@interface _UIFenceTask : NSObject <BSInvalidatable> {

	unsigned long long _identifier;
	os_unfair_lock_s _lock;
	BOOL _lock_invalidated;
	BKSProcessAssertion* _assertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_processRequiresFenceAssertions;
-(id)init;
-(void)invalidate;
-(void)dealloc;
@end

