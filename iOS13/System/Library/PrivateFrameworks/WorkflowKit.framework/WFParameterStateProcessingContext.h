/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFVariableDataSource;
@class WFParameter, WFContentSourceTracker;

@interface WFParameterStateProcessingContext : NSObject {

	BOOL _isInputParameter;
	id<WFVariableDataSource> _variableSource;
	WFParameter* _parameter;
	long long _environment;
	WFContentSourceTracker* _contentSourceTracker;

}

@property (nonatomic,readonly) id<WFVariableDataSource> variableSource;                    //@synthesize variableSource=_variableSource - In the implementation block
@property (nonatomic,readonly) WFParameter * parameter;                                    //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) BOOL isInputParameter;                                      //@synthesize isInputParameter=_isInputParameter - In the implementation block
@property (nonatomic,readonly) long long environment;                                      //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) WFContentSourceTracker * contentSourceTracker;              //@synthesize contentSourceTracker=_contentSourceTracker - In the implementation block
-(long long)environment;
-(WFParameter *)parameter;
-(id<WFVariableDataSource>)variableSource;
-(void)addContentSource:(id)arg1 ;
-(WFContentSourceTracker *)contentSourceTracker;
-(id)initWithVariableSource:(id)arg1 parameter:(id)arg2 isInputParameter:(BOOL)arg3 environment:(long long)arg4 contentSourceTracker:(id)arg5 ;
-(BOOL)isInputParameter;
@end

