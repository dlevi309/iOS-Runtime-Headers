/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MLPDataBatch.h>

@class NSArray, MLPNDArrayLossLabels;

@interface MLPSeqDataBatch : MLPDataBatch {

	NSArray* _matrix;
	MLPNDArrayLossLabels* _combinedLossLabels;
	unsigned long long _labelsCount;

}

@property (retain) NSArray * matrix;                                       //@synthesize matrix=_matrix - In the implementation block
@property (retain) MLPNDArrayLossLabels * combinedLossLabels;              //@synthesize combinedLossLabels=_combinedLossLabels - In the implementation block
@property (assign) unsigned long long labelsCount;                         //@synthesize labelsCount=_labelsCount - In the implementation block
-(id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3 ;
-(NSArray *)matrix;
-(MLPNDArrayLossLabels *)combinedLossLabels;
-(unsigned long long)labelsCount;
-(void)setMatrix:(NSArray *)arg1 ;
-(void)setCombinedLossLabels:(MLPNDArrayLossLabels *)arg1 ;
-(void)setLabelsCount:(unsigned long long)arg1 ;
@end

