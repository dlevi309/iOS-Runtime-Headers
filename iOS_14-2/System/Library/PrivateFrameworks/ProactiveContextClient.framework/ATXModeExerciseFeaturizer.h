/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXModeFeaturizerDelegate;
@class _CDClientContext, _CDContextualChangeRegistration, NSString;

@interface ATXModeExerciseFeaturizer : NSObject <ATXModeFeaturizer> {

	_CDClientContext* _userContext;
	_CDContextualChangeRegistration* _registration;
	BOOL _isInWorkout;
	id<ATXModeFeaturizerDelegate> _delegate;

}

@property (assign) BOOL isInWorkout;                                                     //@synthesize isInWorkout=_isInWorkout - In the implementation block
@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopListening;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(void)beginListening;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(BOOL)isInWorkout;
-(void)_setUpContextIfNecessary;
-(id)_createWorkoutPredicate;
-(void)setIsInWorkout:(BOOL)arg1 ;
-(id)provideFeatures;
@end

