/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface VCVoiceShortcutPhraseValidationResult : NSObject <NSSecureCoding> {

	NSString* _phrase;
	long long _validationState;
	NSError* _validationError;

}

@property (nonatomic,copy,readonly) NSString * phrase;               //@synthesize phrase=_phrase - In the implementation block
@property (assign,nonatomic) long long validationState;              //@synthesize validationState=_validationState - In the implementation block
@property (nonatomic,retain) NSError * validationError;              //@synthesize validationError=_validationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phrase;
-(long long)validationState;
-(void)setValidationState:(long long)arg1 ;
-(id)initWithPhrase:(id)arg1 validationState:(long long)arg2 validationError:(id)arg3 ;
-(NSError *)validationError;
-(void)setValidationError:(NSError *)arg1 ;
@end

