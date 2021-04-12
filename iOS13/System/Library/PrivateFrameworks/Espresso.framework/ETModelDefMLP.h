/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)buildNetwork;
-(int)input_size;
-(void)setInput_size:(int)arg1 ;
-(int)hidden_size;
-(void)setHidden_size:(int)arg1 ;
-(int)output_size;
-(void)setOutput_size:(int)arg1 ;
@end

