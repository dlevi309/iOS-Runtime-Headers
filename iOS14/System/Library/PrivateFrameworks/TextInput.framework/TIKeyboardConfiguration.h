/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSString, NSArray;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding> {

	BOOL _assertDefaultKeyPlane;
	TIKeyboardInputManagerState* _inputManagerState;
	TIKeyboardIntermediateText* _intermediateText;
	NSString* _layoutTag;
	NSString* _accentKeyString;
	NSArray* _multilingualLanguages;

}

@property (nonatomic,copy) TIKeyboardInputManagerState * inputManagerState;              //@synthesize inputManagerState=_inputManagerState - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;              //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,copy) NSString * layoutTag;                                         //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,copy) NSString * accentKeyString;                                   //@synthesize accentKeyString=_accentKeyString - In the implementation block
@property (assign,nonatomic) BOOL assertDefaultKeyPlane;                                 //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
@property (nonatomic,retain) NSArray * multilingualLanguages;                            //@synthesize multilingualLanguages=_multilingualLanguages - In the implementation block
+(BOOL)supportsSecureCoding;
-(TIKeyboardInputManagerState *)inputManagerState;
-(void)setMultilingualLanguages:(NSArray *)arg1 ;
-(void)setAccentKeyString:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAssertDefaultKeyPlane:(BOOL)arg1 ;
-(NSString *)layoutTag;
-(TIKeyboardIntermediateText *)intermediateText;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLayoutTag:(NSString *)arg1 ;
-(void)setInputManagerState:(TIKeyboardInputManagerState *)arg1 ;
-(NSArray *)multilingualLanguages;
-(NSString *)accentKeyString;
-(BOOL)assertDefaultKeyPlane;
@end

