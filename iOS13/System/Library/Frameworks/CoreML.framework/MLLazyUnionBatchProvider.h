/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@protocol MLBatchProvider;
@interface MLLazyUnionBatchProvider : NSObject <MLBatchProvider> {

	id<MLBatchProvider> _first;
	id<MLBatchProvider> _second;

}

@property (nonatomic,retain) id<MLBatchProvider> first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id<MLBatchProvider> second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) long long count; 
-(long long)count;
-(void)setSecond:(id<MLBatchProvider>)arg1 ;
-(id<MLBatchProvider>)second;
-(id)featuresAtIndex:(long long)arg1 ;
-(id<MLBatchProvider>)first;
-(void)setFirst:(id<MLBatchProvider>)arg1 ;
-(id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 error:(id*)arg3 ;
@end

