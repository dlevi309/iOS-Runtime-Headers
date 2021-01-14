/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <ScreenReaderOutput/SCROBrailleKey.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding> {

	unsigned _modifiers;
	unsigned _keyCode;
	unsigned _virtualKeyCode;
	NSString* _keyString;

}

@property (nonatomic,retain) NSString * keyString;                 //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) unsigned modifiers;                   //@synthesize modifiers=_modifiers - In the implementation block
@property (assign,nonatomic) unsigned keyCode;                     //@synthesize keyCode=_keyCode - In the implementation block
@property (assign,nonatomic) unsigned virtualKeyCode;              //@synthesize virtualKeyCode=_virtualKeyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)keyString;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)keyCode;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)modifiers;
-(void)setKeyString:(NSString *)arg1 ;
-(void)setModifiers:(unsigned)arg1 ;
-(void)setKeyCode:(unsigned)arg1 ;
-(unsigned)virtualKeyCode;
-(void)setVirtualKeyCode:(unsigned)arg1 ;
@end

