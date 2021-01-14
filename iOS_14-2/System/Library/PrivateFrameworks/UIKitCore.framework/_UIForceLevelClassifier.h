/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)receiveObservedValue:(id)arg1 ;
-(long long)currentForceLevel;
-(void)touchForceMultiplierDidChange;
-(id)init;
-(id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2 ;
-(id<_UIForceLevelClassifierDelegate>)delegate;
-(void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2 ;
-(void)setCurrentForceLevel:(long long)arg1 ;
-(void)setCurrentTouchForceMultiplier:(double)arg1 ;
-(BOOL)wantsUnclampedForceValues;
-(void)setDelegate:(id<_UIForceLevelClassifierDelegate>)arg1 ;
-(id)observableForProgressToForceLevel:(long long)arg1 ;
-(void)reset;
-(void)setRespectsSystemGestureTouchFiltering:(BOOL)arg1 ;
-(void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(double)currentTouchForceMultiplier;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(BOOL)respectsSystemGestureTouchFiltering;
-(void)dealloc;
@end

