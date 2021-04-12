/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, NSString;

@interface TITypologyRecordGroupMarker : TITypologyRecord {

	TIKeyboardState* _keyboardState;
	NSString* _textChange;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;              //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,copy) NSString * textChange;                          //@synthesize textChange=_textChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)currentKeyboardState;
-(NSString *)textChange;
-(TIKeyboardState *)keyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(void)removeContextFromKeyboardState;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextChange:(NSString *)arg1 ;
@end

