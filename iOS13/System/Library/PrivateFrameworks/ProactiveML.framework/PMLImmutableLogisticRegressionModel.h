/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>
#import <libobjc.A.dylib/PMLRegressionModelProtocol.h>
#import <libobjc.A.dylib/PMLClassifierModelProtocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol, PMLClassifierModelProtocol> {

	id _backingObject;
	const float* _weights;
	int _length;
	BOOL _intercept;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)predict:(id)arg1 ;
-(BOOL)intercept;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(BOOL)classify:(id)arg1 ;
-(id)initWithWeights:(id)arg1 intercept:(BOOL)arg2 ;
-(id)initWithChunk:(id)arg1 intercept:(BOOL)arg2 ;
-(id)initWithFloatsNoCopy:(const float*)arg1 count:(int)arg2 intercept:(BOOL)arg3 ;
-(id)toChunk;
@end

