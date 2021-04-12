/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/MLClassifier.h>

@class MLSVMEngine;

@interface MLSupportVectorClassifier : MLClassifier {

	MLSVMEngine* _engine;

}

@property (retain) MLSVMEngine * engine;              //@synthesize engine=_engine - In the implementation block
+(id)featureValueWithObject:(id)arg1 ;
-(MLSVMEngine *)engine;
-(void)setEngine:(MLSVMEngine *)arg1 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

