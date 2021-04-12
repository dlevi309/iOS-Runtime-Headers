/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRPollingTimer : NSObject {

	SCD_Struct_CR16 _fireTime;
	BOOL _fired;
	BOOL _valid;
	id _target;
	SEL _selector;

}

@property (assign,nonatomic) SCD_Struct_CR16 fireTime; 
@property (assign,nonatomic,__weak) id target;                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL fired;                            //@synthesize fired=_fired - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(SEL)selector;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(SCD_Struct_CR16)fireTime;
-(void)setFireTime:(SCD_Struct_CR16)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)evalAtTime:(SCD_Struct_CR16)arg1 ;
-(BOOL)fired;
-(void)setFired:(BOOL)arg1 ;
@end

