/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLNoiseStrategy.h>

@class NSString;

@interface PMLNoNoiseStrategy : NSObject <PMLNoiseStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(void)addNoiseToSparseVector:(id)arg1 ;
-(void)addNoiseToSparseMatrix:(id)arg1 ;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float*)arg3 ;
@end

