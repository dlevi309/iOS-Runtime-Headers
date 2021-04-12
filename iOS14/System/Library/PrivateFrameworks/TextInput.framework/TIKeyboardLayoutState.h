/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasCandidateKey;
	BOOL _hasAccentKey;
	BOOL _canMultitap;
	BOOL _isAlphabeticPlane;
	BOOL _isKanaPlane;
	BOOL _diacriticForwardCompose;
	BOOL _interfaceIdiomIsPad;
	NSString* _inputMode;
	NSString* _layoutTag;
	long long _userInterfaceIdiom;

}

@property (nonatomic,copy) NSString * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,readonly) NSString * softwareLayout; 
@property (assign,nonatomic) BOOL hasCandidateKey;                      //@synthesize hasCandidateKey=_hasCandidateKey - In the implementation block
@property (assign,nonatomic) BOOL hasAccentKey;                         //@synthesize hasAccentKey=_hasAccentKey - In the implementation block
@property (assign,nonatomic) BOOL canMultitap;                          //@synthesize canMultitap=_canMultitap - In the implementation block
@property (assign,nonatomic) BOOL isAlphabeticPlane;                    //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (assign,nonatomic) BOOL isKanaPlane;                          //@synthesize isKanaPlane=_isKanaPlane - In the implementation block
@property (assign,nonatomic) BOOL diacriticForwardCompose;              //@synthesize diacriticForwardCompose=_diacriticForwardCompose - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                        //@synthesize layoutTag=_layoutTag - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiom;              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (assign,nonatomic) BOOL interfaceIdiomIsPad;                  //@synthesize interfaceIdiomIsPad=_interfaceIdiomIsPad - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInputMode:(NSString *)arg1 ;
-(long long)userInterfaceIdiom;
-(NSString *)inputMode;
-(void)setUserInterfaceIdiom:(long long)arg1 ;
-(NSString *)softwareLayout;
-(BOOL)diacriticForwardCompose;
-(void)setHasCandidateKey:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)layoutTag;
-(void)setCanMultitap:(BOOL)arg1 ;
-(void)setInterfaceIdiomIsPad:(BOOL)arg1 ;
-(BOOL)isKanaPlane;
-(void)setHasAccentKey:(BOOL)arg1 ;
-(void)setIsKanaPlane:(BOOL)arg1 ;
-(void)setIsAlphabeticPlane:(BOOL)arg1 ;
-(BOOL)interfaceIdiomIsPad;
-(id)description;
-(BOOL)canMultitap;
-(void)setDiacriticForwardCompose:(BOOL)arg1 ;
-(void)setInterfaceIdiomIsPad;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLayoutTag:(NSString *)arg1 ;
-(BOOL)hasCandidateKey;
-(BOOL)hasAccentKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAlphabeticPlane;
-(BOOL)isEqual:(id)arg1 ;
@end

