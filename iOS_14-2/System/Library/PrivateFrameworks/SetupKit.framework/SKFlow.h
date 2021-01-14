/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
*/

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CULabelable.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject;

@interface SKFlow : NSObject <CUActivatable, CULabelable> {

	BOOL _activateCalled;
	NSMutableArray* _activatedSteps;
	unsigned long long _currentStepIndex;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	int _runState;
	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	/*^block*/id _buildStepsHandler;

}

@property (nonatomic,copy) id buildStepsHandler;                                      //@synthesize buildStepsHandler=_buildStepsHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)description;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
-(void)activateStep:(id)arg1 ;
-(void)_runSteps;
-(id)buildStepsHandler;
-(void)setBuildStepsHandler:(id)arg1 ;
@end

