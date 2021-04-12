/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIKeyCommand *)keyCommand;
-(unsigned long long)keyCommandIdentifier;
-(void)setKeyCommand:(UIKeyCommand *)arg1 ;
-(void)setKeyCommandIdentifier:(unsigned long long)arg1 ;
@end

