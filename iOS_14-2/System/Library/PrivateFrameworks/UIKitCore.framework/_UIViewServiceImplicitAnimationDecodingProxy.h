/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITargetedProxy.h>
#import <UIKitCore/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h>

@class _UIViewAnimationAttributes, NSString;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

	SEL _implicitAnimationSelector;
	_UIViewAnimationAttributes* _animationAttributes;
	BOOL _animationsEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyDecodingAnimationsForTarget:(id)arg1 ;
-(void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(BOOL)arg3 ;
-(void)forwardInvocation:(id)arg1 ;
@end

