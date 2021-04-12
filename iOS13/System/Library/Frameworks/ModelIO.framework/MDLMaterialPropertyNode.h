/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLNamed.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLMaterialPropertyNode : NSObject <MDLNamed> {

	NSArray* _inputs;
	NSArray* _outputs;
	NSMutableArray* _inputNodes;
	/*^block*/id _evaluationFunction;
	NSString* _name;

}

@property (nonatomic,copy) id evaluationFunction;              //@synthesize evaluationFunction=_evaluationFunction - In the implementation block
@property (nonatomic,readonly) NSArray * inputs;               //@synthesize inputs=_inputs - In the implementation block
@property (nonatomic,readonly) NSArray * outputs;              //@synthesize outputs=_outputs - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(id)initWithInputs:(id)arg1 outputs:(id)arg2 evaluationFunction:(/*^block*/id)arg3 ;
-(id)evaluationFunction;
-(void)setEvaluationFunction:(id)arg1 ;
@end

