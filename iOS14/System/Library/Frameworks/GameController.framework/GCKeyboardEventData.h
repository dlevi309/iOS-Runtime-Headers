/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCKeyboardEventData : NSObject <NSSecureCoding> {

	BOOL _pressed;
	unsigned short _keyCode;
	unsigned long long _senderID;

}

@property (assign) unsigned short keyCode;                   //@synthesize keyCode=_keyCode - In the implementation block
@property (assign) BOOL pressed;                             //@synthesize pressed=_pressed - In the implementation block
@property (assign) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)pressed;
-(unsigned long long)senderID;
-(void)setPressed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(unsigned short)keyCode;
-(void)setSenderID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setKeyCode:(unsigned short)arg1 ;
@end

