/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCExtendedGamepad.h>

@class GCControllerButtonInput;

@interface GCXboxGamepad : GCExtendedGamepad {

	GCControllerButtonInput* _paddleButton1;
	GCControllerButtonInput* _paddleButton2;
	GCControllerButtonInput* _paddleButton3;
	GCControllerButtonInput* _paddleButton4;
	long long _type;
	GCControllerButtonInput* _buttonShare;

}

@property (assign,nonatomic) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) GCControllerButtonInput * buttonShare;                  //@synthesize buttonShare=_buttonShare - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton1;              //@synthesize paddleButton1=_paddleButton1 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton2;              //@synthesize paddleButton2=_paddleButton2 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton3;              //@synthesize paddleButton3=_paddleButton3 - In the implementation block
@property (nonatomic,readonly) GCControllerButtonInput * paddleButton4;              //@synthesize paddleButton4=_paddleButton4 - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)initializeExtraControllerElements;
-(GCControllerButtonInput *)paddleButton1;
-(GCControllerButtonInput *)paddleButton2;
-(GCControllerButtonInput *)paddleButton3;
-(GCControllerButtonInput *)paddleButton4;
-(GCControllerButtonInput *)buttonShare;
-(void)setButtonShare:(GCControllerButtonInput *)arg1 ;
@end

