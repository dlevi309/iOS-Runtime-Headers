/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)submitRequestForComposition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSampleMode:(long long)arg1 ;
-(id)initWithName:(id)arg1 responseQueue:(id)arg2 ;
-(NSArray *)pipelineFilters;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
-(long long)sampleMode;
@end

