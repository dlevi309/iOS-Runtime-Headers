/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BRLTTranslationParameters : NSObject <NSSecureCoding> {

	BOOL _partial;
	BOOL _useTechnicalTableIfPossible;
	NSString* _language;
	unsigned long long _mode;
	NSRange _textPositionsRange;

}

@property (nonatomic,copy,readonly) NSString * language;                      //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                       //@synthesize mode=_mode - In the implementation block
@property (getter=isPartial,nonatomic,readonly) BOOL partial;                 //@synthesize partial=_partial - In the implementation block
@property (nonatomic,readonly) BOOL useTechnicalTableIfPossible;              //@synthesize useTechnicalTableIfPossible=_useTechnicalTableIfPossible - In the implementation block
@property (nonatomic,readonly) NSRange textPositionsRange;                    //@synthesize textPositionsRange=_textPositionsRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)mode;
-(NSString *)language;
-(BOOL)isPartial;
-(BOOL)useTechnicalTableIfPossible;
-(NSRange)textPositionsRange;
-(id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 partial:(BOOL)arg3 useTechnicalTable:(BOOL)arg4 textPositionsRange:(NSRange)arg5 ;
@end

