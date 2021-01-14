/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSString;

@interface ETLossDefinition : NSObject {

	NSString* _inputName;
	NSString* _targetInputName;
	NSString* _lossOutputName;
	unsigned long long _mode;
	NSString* _outputName;

}

@property (retain) NSString * outputName;                     //@synthesize outputName=_outputName - In the implementation block
@property (readonly) NSString * inputName;                    //@synthesize inputName=_inputName - In the implementation block
@property (readonly) NSString * targetInputName;              //@synthesize targetInputName=_targetInputName - In the implementation block
@property (readonly) NSString * lossOutputName;               //@synthesize lossOutputName=_lossOutputName - In the implementation block
@property (readonly) unsigned long long mode;                 //@synthesize mode=_mode - In the implementation block
+(id)BuiltInLoss:(id)arg1 ;
+(id)L2LossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3 ;
+(id)crossEntropyLossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3 ;
-(unsigned long long)mode;
-(NSString *)inputName;
-(NSString *)targetInputName;
-(NSString *)outputName;
-(id)initWithMode:(unsigned long long)arg1 inputName:(id)arg2 targetName:(id)arg3 lossOutputName:(id)arg4 ;
-(void)setOutputName:(NSString *)arg1 ;
-(NSString *)lossOutputName;
@end

