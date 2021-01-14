/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/CHSWidgetPersonality.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CHSLocalizableString, INCWidgetIntentProvider, INIntent, NSMutableArray;

@interface CHSAvocadoDescriptor : NSObject <CHSWidgetPersonality, NSCopying, NSSecureCoding> {

	NSString* _extensionBundleIdentifier;
	NSString* _containerBundleIdentifier;
	NSString* _kind;
	CHSLocalizableString* _localizableDisplayName;
	NSString* _intentType;
	NSString* _userActivityType;
	unsigned long long _supportedSizeClasses;
	CHSLocalizableString* _localizableWidgetDescription;
	long long _widgetVisibility;
	INCWidgetIntentProvider* _defaultIntentProvider;
	INIntent* _defaultIntent;
	NSMutableArray* _fetchDefaultIntentCompletions;

}

@property (nonatomic,retain) INCWidgetIntentProvider * defaultIntentProvider;                         //@synthesize defaultIntentProvider=_defaultIntentProvider - In the implementation block
@property (nonatomic,copy) INIntent * defaultIntent;                                                  //@synthesize defaultIntent=_defaultIntent - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchDefaultIntentCompletions;                          //@synthesize fetchDefaultIntentCompletions=_fetchDefaultIntentCompletions - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier;                             //@synthesize extensionBundleIdentifier=_extensionBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;                             //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                                  //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) CHSLocalizableString * localizableDisplayName;                    //@synthesize localizableDisplayName=_localizableDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentType;                                            //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * userActivityType;                                      //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedSizeClasses;                               //@synthesize supportedSizeClasses=_supportedSizeClasses - In the implementation block
@property (nonatomic,copy,readonly) CHSLocalizableString * localizableWidgetDescription;              //@synthesize localizableWidgetDescription=_localizableWidgetDescription - In the implementation block
@property (nonatomic,readonly) long long widgetVisibility;                                            //@synthesize widgetVisibility=_widgetVisibility - In the implementation block
@property (getter=isInternal,nonatomic,readonly) BOOL internal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)userActivityType;
-(BOOL)isInternal;
-(id)succinctDescription;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 localizableDisplayName:(id)arg4 intentType:(id)arg5 supportedSizeClasses:(unsigned long long)arg6 localizableWidgetDescription:(id)arg7 widgetVisibility:(long long)arg8 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 supportedSizeClasses:(unsigned long long)arg5 widgetDescription:(id)arg6 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 localizableDisplayName:(id)arg4 intentType:(id)arg5 supportedSizeClasses:(unsigned long long)arg6 localizableWidgetDescription:(id)arg7 ;
-(id)initWithExtensionBundleIdentifier:(id)arg1 containerBundleIdentifier:(id)arg2 kind:(id)arg3 displayName:(id)arg4 intentType:(id)arg5 userActivityType:(id)arg6 supportedSizeClasses:(unsigned long long)arg7 widgetDescription:(id)arg8 ;
-(NSString *)containerBundleIdentifier;
-(BOOL)matchesPersonality:(id)arg1 ;
-(unsigned long long)supportedSizeClasses;
-(INIntent *)defaultIntent;
-(NSMutableArray *)fetchDefaultIntentCompletions;
-(void)setDefaultIntentProvider:(INCWidgetIntentProvider *)arg1 ;
-(void)setFetchDefaultIntentCompletions:(NSMutableArray *)arg1 ;
-(void)setDefaultIntent:(INIntent *)arg1 ;
-(CHSLocalizableString *)localizableDisplayName;
-(long long)widgetVisibility;
-(CHSLocalizableString *)localizableWidgetDescription;
-(id)widgetForFamily:(long long)arg1 intent:(id)arg2 ;
-(void)loadDefaultIntent:(/*^block*/id)arg1 ;
-(BOOL)_isValidSizeClass:(long long)arg1 ;
-(INCWidgetIntentProvider *)defaultIntentProvider;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)kind;
-(NSString *)description;
-(NSString *)intentType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

