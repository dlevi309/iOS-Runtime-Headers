/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITargetedProxy.h>
#import <UIKitCore/_UIViewServiceUIBehaviorInterface.h>

@class _UIViewServiceFencingControlProxy, NSString;

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {

	int _remotePID;
	_UIViewServiceFencingControlProxy* _fencingControlProxy;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3 ;
-(oneway void)release;
-(int)__automatic_invalidation_logic;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
@end

