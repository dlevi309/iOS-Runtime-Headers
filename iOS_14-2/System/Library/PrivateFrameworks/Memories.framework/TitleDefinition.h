/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSString, UIColor, NSDictionary;

@interface TitleDefinition : NSObject <NSCopying> {

	BOOL _durationExplicitlySet;
	BOOL _anchorTargetOffsetExplicitlySet;
	BOOL _anchorLocalOffsetExplicitlySet;
	BOOL _audioEnabled;
	BOOL _temporarilyDisabled;
	int _duration;
	int _anchorTargetOffset;
	int _anchorLocalOffset;
	int _introFadeDuration;
	int _outroFadeDuration;
	PVEffect* _titleEffect;
	NSString* _titleName;
	NSString* _text;
	NSString* _text2;
	NSString* _text3;
	UIColor* _backgroundColor;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSDictionary* _extendedDefinition;
	NSDictionary* _titleEffectSettings;

}

@property (nonatomic,readonly) int titleGroup; 
@property (nonatomic,readonly) int titleType; 
@property (nonatomic,readonly) NSString * displayName; 
@property (getter=isGeneric,nonatomic,readonly) BOOL generic; 
@property (getter=isMotion,nonatomic,readonly) BOOL motion; 
@property (nonatomic,retain) NSString * titleName;                                                                       //@synthesize titleName=_titleName - In the implementation block
@property (nonatomic,retain) NSString * text;                                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * text2;                                                                           //@synthesize text2=_text2 - In the implementation block
@property (nonatomic,retain) NSString * text3;                                                                           //@synthesize text3=_text3 - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                                                                     //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                                                   //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) int duration;                                                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int anchorTargetOffset;                                                                     //@synthesize anchorTargetOffset=_anchorTargetOffset - In the implementation block
@property (assign,nonatomic) int anchorLocalOffset;                                                                      //@synthesize anchorLocalOffset=_anchorLocalOffset - In the implementation block
@property (assign,nonatomic) int introFadeDuration;                                                                      //@synthesize introFadeDuration=_introFadeDuration - In the implementation block
@property (assign,nonatomic) int outroFadeDuration;                                                                      //@synthesize outroFadeDuration=_outroFadeDuration - In the implementation block
@property (assign,getter=isDurationExplicitlySet,nonatomic) BOOL durationExplicitlySet;                                  //@synthesize durationExplicitlySet=_durationExplicitlySet - In the implementation block
@property (assign,getter=isAnchorTargetOffsetExplicitlySet,nonatomic) BOOL anchorTargetOffsetExplicitlySet;              //@synthesize anchorTargetOffsetExplicitlySet=_anchorTargetOffsetExplicitlySet - In the implementation block
@property (assign,getter=isAnchorLocalOffsetExplicitlySet,nonatomic) BOOL anchorLocalOffsetExplicitlySet;                //@synthesize anchorLocalOffsetExplicitlySet=_anchorLocalOffsetExplicitlySet - In the implementation block
@property (nonatomic,retain) NSDictionary * extendedDefinition;                                                          //@synthesize extendedDefinition=_extendedDefinition - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                                                          //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) int animationOutDuration; 
@property (nonatomic,readonly) int nominalOverallDuration; 
@property (nonatomic,readonly) PVEffect * titleEffect;                                                                   //@synthesize titleEffect=_titleEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleEffectID; 
@property (nonatomic,copy) NSDictionary * titleEffectSettings;                                                           //@synthesize titleEffectSettings=_titleEffectSettings - In the implementation block
@property (assign,nonatomic) BOOL temporarilyDisabled;                                                                   //@synthesize temporarilyDisabled=_temporarilyDisabled - In the implementation block
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(int)titleGroupForTitleName:(id)arg1 ;
+(int)titleTypeForTitleName:(id)arg1 ;
+(id)displayNameForTitleName:(id)arg1 ;
+(id)effectIDForTitleName:(id)arg1 ;
+(id)titleStyleRootForTitleName:(id)arg1 ;
+(id)titleStyleDisplayNameForTitleName:(id)arg1 themeID:(id)arg2 ;
+(id)titleDefinitionPlaceholderForTheme:(id)arg1 ;
+(id)titleNameFromTitleStyleRoot:(id)arg1 titleType:(int)arg2 ;
-(BOOL)temporarilyDisabled;
-(void)setDuration:(int)arg1 ;
-(void)setTemporarilyDisabled:(BOOL)arg1 ;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)audioEnabled;
-(UIColor *)secondaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(NSString *)text2;
-(NSString *)text3;
-(void)setText:(NSString *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)description;
-(int)titleType;
-(NSString *)text;
-(id)plistRepresentation;
-(BOOL)isMotion;
-(int)duration;
-(UIColor *)primaryColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(NSDictionary *)titleEffectSettings;
-(id)initWithTitleName:(id)arg1 ;
-(void)setTitleEffectSettings:(NSDictionary *)arg1 ;
-(void)setText2:(NSString *)arg1 ;
-(void)setText3:(NSString *)arg1 ;
-(void)setOutroFadeDuration:(int)arg1 ;
-(PVEffect *)titleEffect;
-(int)anchorTargetOffset;
-(int)anchorLocalOffset;
-(NSString *)titleEffectID;
-(void)setDurationExplicitlySet:(BOOL)arg1 ;
-(void)setAnchorTargetOffsetExplicitlySet:(BOOL)arg1 ;
-(void)setAnchorLocalOffsetExplicitlySet:(BOOL)arg1 ;
-(int)outroFadeDuration;
-(BOOL)isDurationExplicitlySet;
-(BOOL)isAnchorTargetOffsetExplicitlySet;
-(BOOL)isAnchorLocalOffsetExplicitlySet;
-(int)introFadeDuration;
-(NSDictionary *)extendedDefinition;
-(void)setTitleName:(NSString *)arg1 ;
-(void)setAnchorTargetOffset:(int)arg1 ;
-(void)setAnchorLocalOffset:(int)arg1 ;
-(void)setIntroFadeDuration:(int)arg1 ;
-(void)setExtendedDefinition:(NSDictionary *)arg1 ;
-(BOOL)isGeneric;
-(void)updateWithTitleDefinition:(id)arg1 ;
-(int)animationOutDuration;
-(int)nominalOverallDuration;
-(int)titleGroup;
-(NSString *)titleName;
@end

