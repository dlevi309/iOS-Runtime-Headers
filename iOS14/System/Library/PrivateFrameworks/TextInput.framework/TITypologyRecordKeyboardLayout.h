/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TIKeyboardLayout *)keyboardLayout;
-(void)setKeyboardLayout:(TIKeyboardLayout *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)name;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

