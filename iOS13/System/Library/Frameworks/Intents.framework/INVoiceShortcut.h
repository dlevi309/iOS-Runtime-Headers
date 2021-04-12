/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)intent;
-(id)userActivity;
-(INShortcut *)shortcut;
-(id)initWithIntent:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 invocationPhrase:(id)arg2 shortcut:(id)arg3 ;
-(id)_initWithVCVoiceShortcut:(id)arg1 ;
-(NSString *)invocationPhrase;
@end

