/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLNoiseStrategy.h>

@class NSString;

@interface PMLSeparatedDPNoiseStrategy : NSObject <PMLNoiseStrategy> {

	const char* _pflIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getPFLIdentifier:(id)arg1 ;
-(id)init;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(void)addNoiseToSparseVector:(id)arg1 ;
-(void)addNoiseToSparseMatrix:(id)arg1 ;
-(BOOL)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(BOOL)arg2 scaleFactor:(float*)arg3 ;
-(id)initWithPFLIdentifier:(const char*)arg1 ;
@end

