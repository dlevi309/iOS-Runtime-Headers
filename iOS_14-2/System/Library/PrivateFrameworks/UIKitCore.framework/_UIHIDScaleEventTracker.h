/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIHIDScaleEventTracker : NSObject {

	double _scaleZ;
	unsigned long long _compositePhase;

}

@property (nonatomic,readonly) double scaleZ;                                  //@synthesize scaleZ=_scaleZ - In the implementation block
@property (nonatomic,readonly) unsigned long long compositePhase;              //@synthesize compositePhase=_compositePhase - In the implementation block
-(double)scaleZ;
-(void)updateWithHIDEvent:(IOHIDEventRef)arg1 ;
-(void)reset;
-(void)_setCompositePhase:(unsigned long long)arg1 withEvent:(IOHIDEventRef)arg2 ;
-(unsigned long long)compositePhase;
@end

