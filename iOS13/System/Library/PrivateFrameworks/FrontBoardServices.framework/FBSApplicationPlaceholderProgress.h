/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/FBSApplicationPlaceholderProgress.h>

@protocol FBSApplicationPlaceholderProgress
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) double percentComplete; 
@required
-(long long)state;
-(double)percentComplete;

@end

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSProgress, FBSApplicationPlaceholder, NSString;

@interface FBSApplicationPlaceholderProgress : NSObject <FBSApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSProgress* _progress;
	int _invalidated;
	long long _cancellationAllowed;
	long long _state;
	double _percentComplete;
	unsigned long long _installPhase;
	unsigned long long _installState;
	FBSApplicationPlaceholder* _placeholder;

}

@property (nonatomic,__weak,readonly) FBSApplicationPlaceholder * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) unsigned long long installState;                             //@synthesize installState=_installState - In the implementation block
@property (nonatomic,readonly) unsigned long long installPhase;                             //@synthesize installPhase=_installPhase - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double percentComplete;                                      //@synthesize percentComplete=_percentComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)state;
-(unsigned long long)installState;
-(unsigned long long)installPhase;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)percentComplete;
-(FBSApplicationPlaceholder *)placeholder;
-(id)initWithPlaceholder:(id)arg1 queue:(id)arg2 ;
-(BOOL)queue_isValid;
-(unsigned long long)queue_supportedActions;
-(BOOL)queue_canPerformAction:(unsigned long long)arg1 ;
-(BOOL)queue_updateProxy:(id)arg1 ;
-(void)_stopObservingProgress:(id)arg1 withContext:(void*)arg2 ;
-(void)_startObservingProgress:(id)arg1 withContext:(void*)arg2 ;
-(BOOL)_queue_updateFromProgress;
-(BOOL)queue_isCancellationAllowed;
@end

