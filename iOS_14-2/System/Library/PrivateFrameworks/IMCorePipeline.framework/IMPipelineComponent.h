/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCorePipeline.framework/IMCorePipeline
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@protocol IMPipelineComponent
@required
-(id)runWithInput:(id)arg1;
-(id)bindTo:(id)arg1;
-(id)runIndividuallyWithInput:(id)arg1;

@end


@protocol IMPipelineComponent;
@interface IMPipelineComponent : NSObject <IMPipelineComponent> {

	id<IMPipelineComponent> _nextComponent;

}

@property (nonatomic,retain) id<IMPipelineComponent> nextComponent;              //@synthesize nextComponent=_nextComponent - In the implementation block
+(id)pipelineFromComponents:(id)arg1 ;
-(id)runWithInput:(id)arg1 ;
-(id)bindTo:(id)arg1 ;
-(id<IMPipelineComponent>)nextComponent;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(void)setNextComponent:(id<IMPipelineComponent>)arg1 ;
@end

