/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, INShortcut;

@interface INVoiceShortcut : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	NSString* _invocationPhrase;
	INShortcut* _shortcut;

}

@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * invocationPhrase;              //@synthesize invocationPhrase=_invocationPhrase - In the implementation block
@property (nonatomic,copy,readonly) INShortcut * shortcut;                    //@synthesize shortcut=_shortcut - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)userActivity;
-(id)intent;
-(id)initWithUserActivity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(INShortcut *)shortcut;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3 ;
-(id)_initWithVCVoiceShortcut:(id)arg1 ;
-(NSString *)invocationPhrase;
-(id)initWithIntent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

