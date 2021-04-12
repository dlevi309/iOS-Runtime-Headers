/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)images;
-(id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3 ;
-(NSArray *)lossLabels;
-(void)setLossLabels:(NSArray *)arg1 ;
@end

