/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/ETModelDef.h>

@interface ETModelDefMLP : ETModelDef {

	int _input_size;
	int _hidden_size;
	int _output_size;

}

@property (assign) int input_size;               //@synthesize input_size=_input_size - In the implementation block
@property (assign) int hidden_size;              //@synthesize hidden_size=_hidden_size - In the implementation block
@property (assign) int output_size;              //@synthesize output_size=_output_size - In the implementation block
-(int)hidden_size;
-(int)input_size;
-(int)output_size;
-(void)buildNetwork;
-(void)setInput_size:(int)arg1 ;
-(void)setHidden_size:(int)arg1 ;
-(void)setOutput_size:(int)arg1 ;
@end

