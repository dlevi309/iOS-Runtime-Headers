/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@protocol _UISEGestureFeatureSettings;
@interface _UISEFirmwareEdgesFailGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider> {

	id<_UISEGestureFeatureSettings> _settings;
	BOOL _hasDoneTest;
	unsigned long long _touchedEdges;

}

@property (nonatomic,readonly) unsigned long long touchedEdges;              //@synthesize touchedEdges=_touchedEdges - In the implementation block
-(id)initWithSettings:(id)arg1 ;
-(unsigned long long)touchedEdges;
-(id)debugDictionary;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
@end

