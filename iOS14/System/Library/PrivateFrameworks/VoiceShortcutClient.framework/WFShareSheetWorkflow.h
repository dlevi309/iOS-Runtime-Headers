/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFShareSheetWorkflow : NSObject <NSSecureCoding> {

	unsigned short _glyphCharacter;
	NSString* _identifier;
	NSString* _name;
	CGImageRef _iconImage;
	double _iconScale;

}

@property (nonatomic,readonly) unsigned short glyphCharacter;              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGImageRef iconImage;                       //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) double iconScale;                           //@synthesize iconScale=_iconScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)iconScale;
-(CGImageRef)iconImage;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setIconImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(unsigned short)glyphCharacter;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 glyphCharacter:(unsigned short)arg3 ;
-(void)dealloc;
@end

