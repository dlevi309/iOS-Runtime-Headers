/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MLPDataBatch.h>

@class NSArray;

@interface MLPImageDataBatch : MLPDataBatch {

	NSArray* _images;
	NSArray* _lossLabels;
	NSArray* _labels;

}

@property (retain) NSArray * images;                  //@synthesize images=_images - In the implementation block
@property (retain) NSArray * lossLabels;              //@synthesize lossLabels=_lossLabels - In the implementation block
@property (retain) NSArray * labels;                  //@synthesize labels=_labels - In the implementation block
-(NSArray *)images;
-(id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3 ;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)lossLabels;
-(void)setLossLabels:(NSArray *)arg1 ;
@end

