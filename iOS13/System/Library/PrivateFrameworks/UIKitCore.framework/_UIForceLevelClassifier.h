/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSObserver.h>

@protocol _UIForceLevelClassifierDelegate;
@class NSObservationSource, NSMutableDictionary, NSArray, NSString;

@interface _UIForceLevelClassifier : NSObject <NSObserver> {

	NSObservationSource* _progressTouchForceObservable;
	NSMutableDictionary* _cachedProgressObservables;
	NSArray* _delegateObservations;
	BOOL _respectsSystemGestureTouchFiltering;
	long long _currentForceLevel;
	id<_UIForceLevelClassifierDelegate> _delegate;
	double _currentTouchForceMultiplier;

}

@property (assign,nonatomic) double currentTouchForceMultiplier;                               //@synthesize currentTouchForceMultiplier=_currentTouchForceMultiplier - In the implementation block
@property (assign,nonatomic) BOOL respectsSystemGestureTouchFiltering;                         //@synthesize respectsSystemGestureTouchFiltering=_respectsSystemGestureTouchFiltering - In the implementation block
@property (assign,nonatomic,__weak) id<_UIForceLevelClassifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentForceLevel;                                    //@synthesize currentForceLevel=_currentForceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<_UIForceLevelClassifierDelegate>)delegate;
-(void)setDelegate:(id<_UIForceLevelClassifierDelegate>)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(void)reset;
-(long long)currentForceLevel;
-(void)setCurrentTouchForceMultiplier:(double)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(void)touchForceMultiplierDidChange;
-(BOOL)respectsSystemGestureTouchFiltering;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(BOOL)wantsUnclampedForceValues;
-(id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(id)observableForProgressToForceLevel:(long long)arg1 ;
-(void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2 ;
-(void)setCurrentForceLevel:(long long)arg1 ;
-(double)currentTouchForceMultiplier;
-(void)setRespectsSystemGestureTouchFiltering:(BOOL)arg1 ;
@end

