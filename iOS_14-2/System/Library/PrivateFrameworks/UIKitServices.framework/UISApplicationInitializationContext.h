/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class UISDisplayContext, UISDeviceContext, NSSet, FBSSceneIdentityToken, NSString;

@interface UISApplicationInitializationContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSXPCSecureCoding> {

	UISDisplayContext* _displayContext;
	UISDeviceContext* _deviceContext;
	NSSet* _persistedSceneIdentifiers;
	FBSSceneIdentityToken* _defaultSceneToken;

}

@property (nonatomic,readonly) UISDisplayContext * displayContext;                     //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,readonly) UISDeviceContext * deviceContext;                       //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,readonly) NSSet * persistedSceneIdentifiers;                      //@synthesize persistedSceneIdentifiers=_persistedSceneIdentifiers - In the implementation block
@property (nonatomic,readonly) FBSSceneIdentityToken * defaultSceneToken;              //@synthesize defaultSceneToken=_defaultSceneToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
+(BOOL)supportsBSXPCSecureCoding;
-(UISDisplayContext *)displayContext;
-(FBSSceneIdentityToken *)defaultSceneToken;
-(id)initWithDisplayContext:(id)arg1 deviceContext:(id)arg2 persistedSceneIdentifiers:(id)arg3 ;
-(NSSet *)persistedSceneIdentifiers;
-(UISDeviceContext *)deviceContext;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithUISApplicationInitializationContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

