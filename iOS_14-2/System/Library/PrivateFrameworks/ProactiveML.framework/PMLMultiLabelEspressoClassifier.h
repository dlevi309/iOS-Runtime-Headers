/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLMultiLabelClassifierProtocol.h>

@class NSString;

@interface PMLMultiLabelEspressoClassifier : NSObject <PMLMultiLabelClassifierProtocol> {

	SCD_Struct_PM0* _espressoModel;
	void* _espressoPlan;
	void* _espressoContext;
	unsigned long long _outputNumReplyClasses;
	unsigned long long _inputNumParameters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classifierWithEspressoModelFile:(id)arg1 intercept:(BOOL)arg2 ;
+(id)makeStringForShape:(unsigned long long)arg1 ;
+(unsigned long long)getNumParametersFromShape:(unsigned long long)arg1 rank:(unsigned long long)arg2 ;
-(id)predict:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)outputDimension;
-(id)initWithEspressoContext:(void*)arg1 espressoPlan:(void*)arg2 espressoModel:(SCD_Struct_PM0*)arg3 inputNumParameters:(unsigned long long)arg4 outputNumReplyClasses:(unsigned long long)arg5 ;
@end

