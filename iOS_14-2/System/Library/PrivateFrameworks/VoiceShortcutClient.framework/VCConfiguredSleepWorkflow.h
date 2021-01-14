/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/WFGlyphDrawableItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VCConfiguredSleepWorkflow : NSObject <WFGlyphDrawableItem, NSSecureCoding, NSCopying> {

	unsigned short _glyphCharacter;
	NSString* _name;
	NSString* _bundleIdentifierForDisplay;
	NSString* _summaryString;
	NSString* _identifier;
	NSString* _actionIdentifier;
	CGImageRef _iconImage;
	double _iconScale;
	long long _backgroundColorValue;

}

@property (nonatomic,readonly) long long backgroundColorValue;                          //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifierForDisplay;              //@synthesize bundleIdentifierForDisplay=_bundleIdentifierForDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString;                           //@synthesize summaryString=_summaryString - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                        //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) CGImageRef iconImage;                                    //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) double iconScale;                                        //@synthesize iconScale=_iconScale - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;                           //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(CGSize)glyphSize;
-(double)iconScale;
-(CGImageRef)iconImage;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(long long)backgroundColorValue;
-(void)setIconImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(unsigned short)glyphCharacter;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)actionIdentifier;
-(NSString *)summaryString;
-(NSString *)identifier;
-(NSString *)bundleIdentifierForDisplay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithWorkflowIdentifier:(id)arg1 bundleIdentifierForDisplay:(id)arg2 summaryString:(id)arg3 name:(id)arg4 actionIdentifier:(id)arg5 glyphCharacter:(unsigned short)arg6 backgroundColorValue:(long long)arg7 ;
@end

