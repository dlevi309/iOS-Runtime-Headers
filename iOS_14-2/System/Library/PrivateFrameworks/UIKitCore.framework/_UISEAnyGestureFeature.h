/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISEGestureFeature.h>
#import <UIKitCore/_UISEGestureFeatureDelegate.h>

@class NSArray, NSString;

@interface _UISEAnyGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {

	NSArray* _subfeatures;

}

@property (nonatomic,readonly) NSArray * subfeatures;               //@synthesize subfeatures=_subfeatures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugDictionary;
-(id)initWithSubfeatures:(id)arg1 ;
-(void)featureDidChangeState:(id)arg1 ;
-(NSArray *)subfeatures;
-(void)_incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
@end

