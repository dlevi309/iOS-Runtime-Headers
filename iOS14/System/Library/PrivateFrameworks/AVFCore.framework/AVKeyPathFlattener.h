/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVKeyPathDependencyHost.h>
#import <AVFCore/AVWeakObservable.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSObject, NSString;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {

	AVKeyPathDependencyManager* _dependencyManager;
	AVTwoPartKeyPath* _dependencyKeyPath;
	NSObject* _observedObject;

}

@property (nonatomic,readonly) id dependentProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(id)init;
-(id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2 ;
-(id)observedObject;
-(id)dependentProperty;
-(id)topLevelDependencyProperty;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(void)dealloc;
@end

