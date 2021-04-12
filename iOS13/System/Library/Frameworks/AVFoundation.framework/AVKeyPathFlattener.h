/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVKeyPathDependencyHost.h>
#import <AVFoundation/AVWeakObservable.h>

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
-(id)init;
-(void)dealloc;
-(id)observedObject;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg1 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg1 ;
-(id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2 ;
-(id)topLevelDependencyProperty;
-(id)dependentProperty;
@end

