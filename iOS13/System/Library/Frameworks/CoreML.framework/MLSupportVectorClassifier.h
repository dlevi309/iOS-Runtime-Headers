/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setEngine:(MLSVMEngine *)arg1 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 configuration:(id)arg4 error:(id*)arg5 ;
@end

