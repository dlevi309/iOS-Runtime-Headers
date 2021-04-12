/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>
#import <UIKitCore/_UISETouchedEdgesProvider.h>

@class NSDictionary, NSString;

@interface _UISEPerTypeEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {

	NSDictionary* _edgeTypeSubfeatures;

}

@property (nonatomic,readonly) unsigned long long touchedEdges; 
@property (nonatomic,readonly) NSDictionary * edgeTypeSubfeatures;              //@synthesize edgeTypeSubfeatures=_edgeTypeSubfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)touchedEdges;
-(id)debugDictionary;
-(id)initWithEdgeTypeSubfeatures:(id)arg1 ;
-(NSDictionary *)edgeTypeSubfeatures;
-(void)featureDidChangeState:(id)arg1 ;
-(void)_incorporateSample:(const UISEGestureFeatureSample*)arg1 ;
@end

