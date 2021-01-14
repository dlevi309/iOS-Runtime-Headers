/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject {

	AWDProactiveModelFittingModelInfo* _modelInfo;

}

@property (nonatomic,readonly) AWDProactiveModelFittingModelInfo * modelInfo;              //@synthesize modelInfo=_modelInfo - In the implementation block
+(id)trackerForPlanId:(id)arg1 ;
+(id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(id)initWithModel:(id)arg1 ;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
@end

