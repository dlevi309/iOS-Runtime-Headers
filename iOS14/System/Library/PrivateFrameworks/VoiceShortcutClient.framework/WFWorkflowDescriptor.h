/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>
#import <libobjc.A.dylib/WFGlyphDrawableItem.h>

@class NSString;

@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor <WFGlyphDrawableItem> {

	unsigned short _glyphCharacter;
	NSString* _name;
	long long _color;
	CGImageRef _iconImage;
	double _iconImageScale;
	NSString* _associatedAppBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long color;                                            //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;                              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,readonly) CGImageRef iconImage;                                       //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) double iconImageScale;                                      //@synthesize iconImageScale=_iconImageScale - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(CGImageRef)iconImage;
-(long long)color;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setIconImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(unsigned short)glyphCharacter;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 color:(long long)arg3 glyphCharacter:(unsigned short)arg4 associatedAppBundleIdentifier:(id)arg5 ;
-(double)iconImageScale;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)associatedAppBundleIdentifier;
-(void)dealloc;
@end

