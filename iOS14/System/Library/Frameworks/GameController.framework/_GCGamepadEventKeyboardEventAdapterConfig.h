/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding> {

	UsagePage_Usage_Pair _mappings[41];

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3 ;
-(long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2 ;
@end

