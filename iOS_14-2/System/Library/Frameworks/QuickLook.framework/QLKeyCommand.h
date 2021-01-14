/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIKeyCommand;

@interface QLKeyCommand : NSObject <NSSecureCoding> {

	UIKeyCommand* _keyCommand;
	unsigned long long _keyCommandIdentifier;

}

@property (nonatomic,retain) UIKeyCommand * keyCommand;                  //@synthesize keyCommand=_keyCommand - In the implementation block
@property (assign) unsigned long long keyCommandIdentifier;              //@synthesize keyCommandIdentifier=_keyCommandIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyCommandWithKeyCommand:(id)arg1 identifier:(unsigned long long)arg2 ;
-(void)setKeyCommand:(UIKeyCommand *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setKeyCommandIdentifier:(unsigned long long)arg1 ;
-(UIKeyCommand *)keyCommand;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)keyCommandIdentifier;
@end

