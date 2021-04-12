/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSMutableArray;

@interface PKInkFunction : NSObject {

	unsigned long long _inkProperty;
	unsigned long long _inkInput;
	unsigned long long _inputMask;
	unsigned long long _deviceMask;
	NSMutableArray* _inputPoints;
	NSMutableArray* _minOutputPoints;
	NSMutableArray* _maxOutputPoints;
	NSMutableArray* _outputPoints;
	unsigned long long _functionType;
	NSMutableArray* _controlPoints;

}

@property (assign,nonatomic) unsigned long long inkProperty;                //@synthesize inkProperty=_inkProperty - In the implementation block
@property (assign,nonatomic) unsigned long long inkInput;                   //@synthesize inkInput=_inkInput - In the implementation block
@property (assign,nonatomic) unsigned long long inputMask;                  //@synthesize inputMask=_inputMask - In the implementation block
@property (assign,nonatomic) unsigned long long deviceMask;                 //@synthesize deviceMask=_deviceMask - In the implementation block
@property (nonatomic,retain) NSMutableArray * inputPoints;                  //@synthesize inputPoints=_inputPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * minOutputPoints;              //@synthesize minOutputPoints=_minOutputPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * maxOutputPoints;              //@synthesize maxOutputPoints=_maxOutputPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputPoints;                 //@synthesize outputPoints=_outputPoints - In the implementation block
@property (assign,nonatomic) unsigned long long functionType;               //@synthesize functionType=_functionType - In the implementation block
@property (nonatomic,retain) NSMutableArray * controlPoints;                //@synthesize controlPoints=_controlPoints - In the implementation block
+(id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7 ;
+(id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 minOutputPoints:(id)arg6 maxOutputPoints:(id)arg7 functionType:(unsigned long long)arg8 ;
-(id)description;
-(NSMutableArray *)inputPoints;
-(unsigned long long)inputMask;
-(void)setInputMask:(unsigned long long)arg1 ;
-(NSMutableArray *)controlPoints;
-(void)setControlPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)functionType;
-(void)setFunctionType:(unsigned long long)arg1 ;
-(id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7 ;
-(id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 minOutputPoints:(id)arg6 maxOutputPoints:(id)arg7 functionType:(unsigned long long)arg8 ;
-(id)initWithInputPoints:(id)arg1 outputPoints:(id)arg2 functionType:(unsigned long long)arg3 ;
-(unsigned long long)inkProperty;
-(void)setInkProperty:(unsigned long long)arg1 ;
-(unsigned long long)inkInput;
-(void)setInkInput:(unsigned long long)arg1 ;
-(unsigned long long)deviceMask;
-(void)setDeviceMask:(unsigned long long)arg1 ;
-(void)setInputPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)minOutputPoints;
-(void)setMinOutputPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)maxOutputPoints;
-(void)setMaxOutputPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputPoints;
-(void)setOutputPoints:(NSMutableArray *)arg1 ;
@end

