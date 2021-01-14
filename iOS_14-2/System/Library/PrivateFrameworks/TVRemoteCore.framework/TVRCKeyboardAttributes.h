/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVRCPINEntryAttributes, RTIDataPayload;

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding> {

	BOOL _likelyPINEntry;
	BOOL _secure;
	BOOL _enablesReturnKeyAutomatically;
	NSString* _title;
	TVRCPINEntryAttributes* _PINEntryAttributes;
	NSString* _prompt;
	RTIDataPayload* _rtiDataPayload;
	long long _keyboardType;
	long long _returnKeyType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _spellCheckingType;

}

@property (nonatomic,copy) NSString * title;                                                                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                                                                                 //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) TVRCPINEntryAttributes * PINEntryAttributes;                                                                                     //@synthesize PINEntryAttributes=_PINEntryAttributes - In the implementation block
@property (nonatomic,retain) RTIDataPayload * rtiDataPayload;                                                                                                 //@synthesize rtiDataPayload=_rtiDataPayload - In the implementation block
@property (assign,setter=_setLikelyPINEntry:,getter=_isLikelyPINEntry,nonatomic) BOOL likelyPINEntry;                                                         //@synthesize likelyPINEntry=_likelyPINEntry - In the implementation block
@property (assign,setter=_setSecure:,getter=_isSecure,nonatomic) BOOL secure;                                                                                 //@synthesize secure=_secure - In the implementation block
@property (assign,setter=_setEnablesReturnKeyAutomatically:,getter=_enablesReturnKeyAutomatically,nonatomic) BOOL enablesReturnKeyAutomatically;              //@synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically - In the implementation block
@property (assign,setter=_setKeyboardType:,getter=_keyboardType,nonatomic) long long keyboardType;                                                            //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,setter=_setReturnKeyType:,getter=_returnKeyType,nonatomic) long long returnKeyType;                                                         //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,setter=_setAutocapitalizationType:,getter=_autocapitalizationType,nonatomic) long long autocapitalizationType;                              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,setter=_setAutocorrectionType:,getter=_autocorrectionType,nonatomic) long long autocorrectionType;                                          //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,setter=_setSpellCheckingType:,getter=_spellCheckingType,nonatomic) long long spellCheckingType;                                             //@synthesize spellCheckingType=_spellCheckingType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(long long)_returnKeyType;
-(void)_setSecure:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(long long)_keyboardType;
-(BOOL)_enablesReturnKeyAutomatically;
-(long long)_autocapitalizationType;
-(long long)_autocorrectionType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)_isSecure;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAttributes:(id)arg1 ;
-(void)_setAutocapitalizationType:(long long)arg1 ;
-(void)_setKeyboardType:(long long)arg1 ;
-(void)_setLikelyPINEntry:(BOOL)arg1 ;
-(void)applyToTextField:(id)arg1 ;
-(TVRCPINEntryAttributes *)PINEntryAttributes;
-(void)setPINEntryAttributes:(TVRCPINEntryAttributes *)arg1 ;
-(RTIDataPayload *)rtiDataPayload;
-(void)setRtiDataPayload:(RTIDataPayload *)arg1 ;
-(BOOL)_isLikelyPINEntry;
-(void)_setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(void)_setReturnKeyType:(long long)arg1 ;
-(void)_setAutocorrectionType:(long long)arg1 ;
-(long long)_spellCheckingType;
-(void)_setSpellCheckingType:(long long)arg1 ;
@end

