/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@class NSArray, NSString;

@interface _UISEHybridEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {

	unsigned long long _fails;
	NSArray* _subfeatures;

}

@property (nonatomic,readonly) unsigned long long touchedEdges; 
@property (nonatomic,readonly) NSArray * subfeatures;                        //@synthesize subfeatures=_subfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)touchedEdges;
-(id)debugDictionary;
-(void)featureDidChangeState:(id)arg1 ;
-(void)_incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
-(id)initWithSubfeatures:(id)arg1 ;
-(NSArray *)subfeatures;
@end

