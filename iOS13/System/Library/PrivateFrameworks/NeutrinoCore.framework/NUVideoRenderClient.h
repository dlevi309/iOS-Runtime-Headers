/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NURenderClient.h>

@protocol NUScalePolicy;
@class NSArray;

@interface NUVideoRenderClient : NURenderClient {

	id<NUScalePolicy> _scalePolicy;
	long long _sampleMode;
	NSArray* _pipelineFilters;

}

@property (nonatomic,retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (assign,nonatomic) long long sampleMode;                       //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;                    //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(NSArray *)pipelineFilters;
-(void)submitRequestForComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSampleMode:(long long)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)initWithName:(id)arg1 responseQueue:(id)arg2 ;
-(id<NUScalePolicy>)scalePolicy;
-(long long)sampleMode;
@end

