/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
*/


@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject {

	AWDProactiveModelFittingModelInfo* _modelInfo;

}

@property (nonatomic,readonly) AWDProactiveModelFittingModelInfo * modelInfo;              //@synthesize modelInfo=_modelInfo - In the implementation block
+(id)trackerForPlanId:(id)arg1 ;
+(id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3 ;
-(id)initWithModel:(id)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
@end

