/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;
@interface _UISEOrthogonalHysteresisGestureFeature : _UISEGestureFeature {

	id<_UISEGestureFeatureSettings> _settings;
	id<_UISETouchedEdgesProvider> _provider;
	CGPoint _initialLocation;
	double _initialTimestamp;

}
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 ;
@end

