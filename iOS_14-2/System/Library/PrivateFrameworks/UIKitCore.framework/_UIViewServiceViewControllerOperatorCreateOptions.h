/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSUUID, UITraitCollection, BSMachPortSendRight;

@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject <NSSecureCoding> {

	NSString* _viewControllerClassName;
	NSArray* _serializedAppearanceRepresentations;
	NSUUID* _contextToken;
	NSArray* _displayConfigurations;
	UITraitCollection* _traitCollection;
	BSMachPortSendRight* _hostAccessibilityServerPort;
	long long _availableTextServices;
	long long _initialInterfaceOrientation;

}

@property (nonatomic,copy) NSString * viewControllerClassName;                               //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy) NSArray * serializedAppearanceRepresentations;                    //@synthesize serializedAppearanceRepresentations=_serializedAppearanceRepresentations - In the implementation block
@property (nonatomic,retain) NSUUID * contextToken;                                          //@synthesize contextToken=_contextToken - In the implementation block
@property (nonatomic,copy) NSArray * displayConfigurations;                                  //@synthesize displayConfigurations=_displayConfigurations - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                            //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,retain) BSMachPortSendRight * hostAccessibilityServerPort;              //@synthesize hostAccessibilityServerPort=_hostAccessibilityServerPort - In the implementation block
@property (assign,nonatomic) long long availableTextServices;                                //@synthesize availableTextServices=_availableTextServices - In the implementation block
@property (assign,nonatomic) long long initialInterfaceOrientation;                          //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)contextToken;
-(UITraitCollection *)traitCollection;
-(void)setContextToken:(NSUUID *)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(BSMachPortSendRight *)hostAccessibilityServerPort;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(void)setAvailableTextServices:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)availableTextServices;
-(long long)initialInterfaceOrientation;
-(void)setDisplayConfigurations:(NSArray *)arg1 ;
-(NSArray *)serializedAppearanceRepresentations;
-(NSString *)viewControllerClassName;
-(id)initWithCoder:(id)arg1 ;
-(void)setSerializedAppearanceRepresentations:(NSArray *)arg1 ;
-(NSArray *)displayConfigurations;
-(void)setHostAccessibilityServerPort:(BSMachPortSendRight *)arg1 ;
-(void)setViewControllerClassName:(NSString *)arg1 ;
@end

