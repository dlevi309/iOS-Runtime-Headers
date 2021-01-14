/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSLocale, CLKUserActivity, NSUserActivity;

@interface CLKComplicationDescriptor : NSObject <NSSecureCoding, NSCopying> {

	BOOL _needsAppNotify;
	NSString* _identifier;
	NSString* _displayName;
	NSArray* _supportedFamilies;
	NSDictionary* _userInfo;
	NSLocale* _locale;
	CLKUserActivity* _clkUserActivity;

}

@property (assign,nonatomic) BOOL needsAppNotify;                            //@synthesize needsAppNotify=_needsAppNotify - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) CLKUserActivity * clkUserActivity;              //@synthesize clkUserActivity=_clkUserActivity - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSArray * supportedFamilies;                  //@synthesize supportedFamilies=_supportedFamilies - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity; 
+(BOOL)supportsSecureCoding;
+(id)legacyComplicationDescriptor;
+(id)legacyComplicationDescriptorWithSupportedFamilies:(id)arg1 ;
+(id)allowedDictionaryClasses;
-(NSUserActivity *)userActivity;
-(void)validate;
-(NSLocale *)locale;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasUserInfo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)supportedFamilies;
-(id)JSONObjectRepresentation;
-(void)setNeedsAppNotify:(BOOL)arg1 ;
-(BOOL)needsAppNotify;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 supportedFamilies:(id)arg3 userActivity:(id)arg4 ;
-(CLKUserActivity *)clkUserActivity;
-(void)setClkUserActivity:(CLKUserActivity *)arg1 ;
@end

