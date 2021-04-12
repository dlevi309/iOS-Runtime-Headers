/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardState;

@interface TIKeyboardInteractionProtocolBase : NSObject <NSSecureCoding> {

	TIKeyboardState* _keyboardState;

}

@property (nonatomic,readonly) TIKeyboardState * keyboardState;              //@synthesize keyboardState=_keyboardState - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(id)initWithKeyboardState:(id)arg1 ;
@end

