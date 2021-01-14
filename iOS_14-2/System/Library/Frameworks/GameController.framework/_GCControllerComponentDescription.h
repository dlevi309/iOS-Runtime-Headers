/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCControllerComponentDescription.h>
#import <libobjc.A.dylib/_GCUpdatableIPCObjectDescription.h>

@protocol GCControllerComponentNSSecureCoding, GCControllerComponent;
@class NSArray, NSString;

@interface _GCControllerComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {

	id<GCControllerComponent><NSSecureCoding> _component;
	NSArray* _bindingDescriptions;
	id<GCControllerComponent> _materializedComponent;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithComponent:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)redactedDescription;
-(id)materializeWithContext:(id)arg1 ;
-(BOOL)update:(id)arg1 withContext:(id)arg2 ;
-(id)initWithComponent:(id)arg1 bindings:(id)arg2 ;
-(void)_applyBinding:(id)arg1 toComponent:(id)arg2 ;
@end

