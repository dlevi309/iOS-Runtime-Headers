/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;
@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider> {

	id<_UISEGestureFeatureSettings> _settings;
	id<_UISETouchedEdgesProvider> _provider;
	BOOL _exactMatchEdges;
	CGPoint _initialLocation;
	unsigned long long _touchedEdges;

}

@property (nonatomic,readonly) unsigned long long touchedEdges;              //@synthesize touchedEdges=_touchedEdges - In the implementation block
-(unsigned long long)touchedEdges;
-(id)debugDictionary;
-(id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 exactMatchEdges:(BOOL)arg3 ;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
@end

