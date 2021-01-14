/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/_GCControllerComponentDescription.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class GCDeviceLight, GCLightXPCProxyClientEndpoint, NSString;

@interface GCLightXPCProxyClientEndpointDescription : NSObject <_GCControllerComponentDescription> {

	GCDeviceLight* _initialLight;
	GCLightXPCProxyClientEndpoint* _materializedObject;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)materializeWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialLight:(id)arg2 ;
@end

