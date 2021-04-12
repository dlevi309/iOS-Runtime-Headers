/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(long long)level;
-(CGRect)frame;
-(CGRect)referenceFrame;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (getter=sb_isTransitioning,nonatomic,readonly) BOOL sb_transitioning; 
@property (assign,nonatomic) CGRect frame;                                                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                                                //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long level;                                                      //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL fillsDisplayBounds;                                              //@synthesize fillsDisplayBounds=_fillsDisplayBounds - In the implementation block
@property (assign,getter=isUIApplicationElement,nonatomic) BOOL UIApplicationElement;              //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardFocus;                                                //@synthesize keyboardFocus=_keyboardFocus - In the implementation block
@property (nonatomic,copy,readonly) BSMutableSettings * otherSettings;                             //@synthesize otherSettings=_otherSettings - In the implementation block
-(long long)layoutRole;
-(BOOL)isSpringBoardElement;
-(BOOL)sb_isTransitioning;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(long long)level;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isUIApplicationElement;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(CGRect)frame;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(CGRect)referenceFrame;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(BSMutableSettings *)otherSettings;
-(BOOL)hasKeyboardFocus;
-(BOOL)fillsDisplayBounds;
-(void)setFillsDisplayBounds:(BOOL)arg1 ;
-(void)setUIApplicationElement:(BOOL)arg1 ;
-(void)setHasKeyboardFocus:(BOOL)arg1 ;
-(void)setOtherSettings:(BSMutableSettings *)arg1 ;
@end

