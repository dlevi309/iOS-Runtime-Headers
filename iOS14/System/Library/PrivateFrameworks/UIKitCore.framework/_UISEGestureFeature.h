/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UISEGestureFeatureDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UISEGestureFeature : NSObject {

	id<_UISEGestureFeatureDelegate> _delegate;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<_UISEGestureFeatureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
-(void)_setState:(unsigned long long)arg1 ;
-(id<_UISEGestureFeatureDelegate>)delegate;
-(void)setDelegate:(id<_UISEGestureFeatureDelegate>)arg1 ;
-(id)debugDictionary;
-(void)incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
-(unsigned long long)state;
-(void)_incorporateSample:(const UISEGestureFeatureSampleRef)arg1 ;
@end

