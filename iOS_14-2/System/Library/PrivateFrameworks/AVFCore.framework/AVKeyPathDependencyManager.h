/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVKeyPathDependencyRegistration.h>

@class AVWeakReference, AVWeakObservableCallbackCancellationHelper, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {

	AVWeakReference* _weakReferenceToDependencyHost;
	AVWeakObservableCallbackCancellationHelper* _callbackCancellationHelper;
	NSMutableSet* _keyPathDependencies;

}
-(void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2 ;
-(void)addCallbackToCancel:(id)arg1 ;
-(void)cancelAllCallbacks;
-(id)initWithDependencyHost:(id)arg1 ;
-(void)dealloc;
-(void)dependencyHostIsFullyInitialized;
@end

