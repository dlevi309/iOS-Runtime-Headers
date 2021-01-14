/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTAlignment : NSObject <NSSecureCoding> {

	BOOL _shouldTranslate;
	NSString* _identifier;
	NSString* _text;
	NSRange _sourceRange;
	NSRange _targetRange;

}

@property (assign,nonatomic) NSRange sourceRange;               //@synthesize sourceRange=_sourceRange - In the implementation block
@property (assign,nonatomic) NSRange targetRange;               //@synthesize targetRange=_targetRange - In the implementation block
@property (nonatomic,copy) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL shouldTranslate;              //@synthesize shouldTranslate=_shouldTranslate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSRange)targetRange;
-(NSString *)text;
-(void)setTargetRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)shouldTranslate;
-(NSString *)identifier;
-(NSRange)sourceRange;
-(void)setSourceRange:(NSRange)arg1 ;
-(void)setShouldTranslate:(BOOL)arg1 ;
@end

