/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCMotionEventSourceDescription.h>

@protocol _GCHIDEventSourceDescription;
@class _GCCControllerHIDServiceInfoDescription, _GCMotionEventHIDAdapter, NSString;

@interface _GCMotionEventHIDAdapterDescription : NSObject <_GCMotionEventSourceDescription> {

	id<_GCHIDEventSourceDescription> _sourceDescription;
	_GCCControllerHIDServiceInfoDescription* _serviceDescription;
	_GCMotionEventHIDAdapter* _materializedObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSource:(id)arg1 service:(id)arg2 ;
-(id)materializeWithContext:(id)arg1 ;
@end

