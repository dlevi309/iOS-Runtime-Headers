/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TIKeyboardState *)keyboardState;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeyboardState:(id)arg1 ;
@end

