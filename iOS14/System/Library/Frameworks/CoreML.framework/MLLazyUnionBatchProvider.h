/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MLBatchProvider>)second;
-(id<MLBatchProvider>)first;
-(id)featuresAtIndex:(long long)arg1 ;
-(void)setFirst:(id<MLBatchProvider>)arg1 ;
-(long long)count;
-(id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 error:(id*)arg3 ;
-(void)setSecond:(id<MLBatchProvider>)arg1 ;
@end

