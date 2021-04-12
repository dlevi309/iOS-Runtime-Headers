/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardLayout, NSString;

@interface TITypologyRecordKeyboardLayout : TITypologyRecord {

	TIKeyboardLayout* _keyboardLayout;
	NSString* _name;

}

@property (nonatomic,retain) TIKeyboardLayout * keyboardLayout;              //@synthesize keyboardLayout=_keyboardLayout - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)shortDescription;
-(TIKeyboardLayout *)keyboardLayout;
-(void)setKeyboardLayout:(TIKeyboardLayout *)arg1 ;
@end

