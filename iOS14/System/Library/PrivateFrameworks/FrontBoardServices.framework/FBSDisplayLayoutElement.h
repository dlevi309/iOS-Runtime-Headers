/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSDisplayLayoutElement.h>
@class NSString;


@protocol FBSDisplayLayoutElement <FBSUIApplicationLayoutElement>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect referenceFrame; 
@property (nonatomic,readonly) long long level; 
@required
-(CGRect)frame;
-(CGRect)referenceFrame;
-(long long)level;
-(NSString *)identifier;

@end


@class NSString, BSMutableSettings;

@interface FBSDisplayLayoutElement : NSObject <SBSDisplayLayoutElement, NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement> {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	CGRect _frame;
	CGRect _referenceFrame;
	long long _level;
	BOOL _fillsDisplayBounds;
	BOOL _application;
	BOOL _keyboardFocus;
	BSMutableSettings* _otherSettings;

}

@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (getter=sb_isTransitioning,nonatomic,readonly) BOOL sb_transitioning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect frame;                                                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                                                //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long level;                                                      //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL fillsDisplayBounds;                                              //@synthesize fillsDisplayBounds=_fillsDisplayBounds - In the implementation block
@property (assign,getter=isUIApplicationElement,nonatomic) BOOL UIApplicationElement;              //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardFocus;                                                //@synthesize keyboardFocus=_keyboardFocus - In the implementation block
@property (nonatomic,copy,readonly) BSMutableSettings * otherSettings;                             //@synthesize otherSettings=_otherSettings - In the implementation block
-(BOOL)_intents_isSiri;
-(BOOL)_intents_isExpectedElement;
-(id)_intents_SpringBoardElement;
-(long long)layoutRole;
-(BOOL)sb_isTransitioning;
-(BOOL)isSpringBoardElement;
-(id)succinctDescription;
-(BOOL)isUIApplicationElement;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(CGRect)frame;
-(NSString *)bundleIdentifier;
-(CGRect)referenceFrame;
-(BOOL)hasKeyboardFocus;
-(BOOL)fillsDisplayBounds;
-(void)setFillsDisplayBounds:(BOOL)arg1 ;
-(void)setUIApplicationElement:(BOOL)arg1 ;
-(void)setHasKeyboardFocus:(BOOL)arg1 ;
-(void)setOtherSettings:(BSMutableSettings *)arg1 ;
-(NSString *)description;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(long long)level;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BSMutableSettings *)otherSettings;
-(id)succinctDescriptionBuilder;
-(void)setLevel:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

