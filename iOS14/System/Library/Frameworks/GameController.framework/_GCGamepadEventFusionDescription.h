/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCGamepadEventSourceDescription.h>

@class _GCGamepadEventFusionConfig, NSArray, _GCGamepadEventFusion, NSString;

@interface _GCGamepadEventFusionDescription : NSObject <_GCGamepadEventSourceDescription> {

	_GCGamepadEventFusionConfig* _config;
	NSArray* _sourcesDescription;
	_GCGamepadEventFusion* _materializedObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)materializeWithContext:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 sources:(id)arg2 ;
@end

