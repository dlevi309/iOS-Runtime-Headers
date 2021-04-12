/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/CSAppearanceProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSString, _UILegibilitySettings, UIColor, NSSet;

@interface CSAppearance : NSObject <BSDescriptionProviding, CSAppearanceProviding, NSCopying> {

	NSMutableSet* _components;
	BOOL _transitional;
	NSString* _identifier;
	long long _backgroundStyle;
	_UILegibilitySettings* _legibilitySettings;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isTransitional,nonatomic) BOOL transitional;                 //@synthesize transitional=_transitional - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                               //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSSet * components;                                        //@synthesize components=_components - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
+(id)appearanceWithIdentifier:(id)arg1 ;
+(id)appearanceForProvider:(id)arg1 ;
-(id)succinctDescription;
-(void)setComponents:(NSSet *)arg1 ;
-(long long)backgroundStyle;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(NSString *)appearanceIdentifier;
-(UIColor *)backgroundColor;
-(void)addComponent:(id)arg1 ;
-(id)componentForType:(long long)arg1 identifier:(id)arg2 ;
-(id)componentForType:(long long)arg1 property:(unsigned long long)arg2 ;
-(NSSet *)components;
-(void)unionAppearance:(id)arg1 ;
-(BOOL)isTransitional;
-(NSString *)description;
-(void)removeAllComponentsWithIdentifier:(id)arg1 ;
-(void)conformsToCSAppearanceProviding;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setTransitional:(BOOL)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(unsigned long long)hash;
-(void)reset;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(long long)flagForComponentType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqualToAppearance:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

