/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/CHSWidgetPersonality.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INIntent;

@interface CHSWidget : NSObject <BSDescriptionProviding, BSXPCCoding, CHSWidgetPersonality, NSCopying, NSSecureCoding> {

	NSString* _extensionBundleIdentifier;
	NSString* _containerBundleIdentifier;
	NSString* _kind;
	long long _family;
	INIntent* _intent;

}

@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;              //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;              //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                   //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long family;                                       //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                      //@synthesize intent=_intent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(INIntent *)intent;
-(id)succinctDescription;
-(id)init;
-(NSString *)containerBundleIdentifier;
-(BOOL)matchesPersonality:(id)arg1 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 family:(long long)arg4 intent:(id)arg5 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 family:(long long)arg3 intent:(id)arg4 ;
-(id)widgetByReplacingIntent:(id)arg1 ;
-(id)initWithPersonality:(id)arg1 family:(long long)arg2 intent:(id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)kind;
-(long long)family;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

