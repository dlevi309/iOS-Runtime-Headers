/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>

@protocol _UISEGestureFeatureSettings;
@class NSMutableDictionary, NSDictionary, NSString;

@interface _UISEMuxGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {

	id<_UISEGestureFeatureSettings> _settings;
	/*^block*/id _createFeatureBlock;
	NSMutableDictionary* _subfeatures;
	unsigned long long _fails;
	unsigned long long _recognizes;

}

@property (nonatomic,readonly) NSDictionary * subfeatures;              //@synthesize subfeatures=_subfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugDictionary;
-(void)featureDidChangeState:(id)arg1 ;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
-(NSDictionary *)subfeatures;
-(id)initWithSettings:(id)arg1 createFeatureBlock:(/*^block*/id)arg2 ;
@end

