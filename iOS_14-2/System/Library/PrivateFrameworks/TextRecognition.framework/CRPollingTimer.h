/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRPollingTimer : NSObject {

	SCD_Struct_CR20 _fireTime;
	BOOL _fired;
	BOOL _valid;
	id _target;
	SEL _selector;

}

@property (assign,nonatomic) SCD_Struct_CR20 fireTime; 
@property (assign,nonatomic,__weak) id target;                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL fired;                            //@synthesize fired=_fired - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(void)setTarget:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(SEL)selector;
-(SCD_Struct_CR20)fireTime;
-(void)setSelector:(SEL)arg1 ;
-(void)setFireTime:(SCD_Struct_CR20)arg1 ;
-(BOOL)fired;
-(BOOL)valid;
-(void)invalidate;
-(id)target;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setFired:(BOOL)arg1 ;
-(void)evalAtTime:(SCD_Struct_CR20)arg1 ;
@end

