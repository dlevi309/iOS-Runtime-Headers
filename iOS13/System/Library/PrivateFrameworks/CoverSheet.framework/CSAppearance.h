/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)appearanceForProvider:(id)arg1 ;
+(id)appearanceWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSSet *)components;
-(void)reset;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(long long)backgroundStyle;
-(void)setComponents:(NSSet *)arg1 ;
-(void)addComponent:(id)arg1 ;
-(NSString *)appearanceIdentifier;
-(void)removeComponent:(id)arg1 ;
-(void)unionAppearance:(id)arg1 ;
-(id)componentForType:(long long)arg1 property:(unsigned long long)arg2 ;
-(id)componentForType:(long long)arg1 identifier:(id)arg2 ;
-(long long)flagForComponentType:(long long)arg1 ;
-(void)setTransitional:(BOOL)arg1 ;
-(BOOL)isEqualToAppearance:(id)arg1 ;
-(void)removeAllComponentsWithIdentifier:(id)arg1 ;
-(BOOL)isTransitional;
@end

