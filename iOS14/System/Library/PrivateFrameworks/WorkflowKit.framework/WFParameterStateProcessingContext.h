/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFVariableDataSource;
@class WFParameter, WFContentAttributionTracker, NSString;

@interface WFParameterStateProcessingContext : NSObject {

	BOOL _isInputParameter;
	id<WFVariableDataSource> _variableSource;
	WFParameter* _parameter;
	long long _environment;
	WFContentAttributionTracker* _contentAttributionTracker;
	NSString* _widgetSizeClass;
	long long _maximumItemCount;

}

@property (nonatomic,readonly) id<WFVariableDataSource> variableSource;                              //@synthesize variableSource=_variableSource - In the implementation block
@property (nonatomic,readonly) WFParameter * parameter;                                              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) BOOL isInputParameter;                                                //@synthesize isInputParameter=_isInputParameter - In the implementation block
@property (nonatomic,readonly) long long environment;                                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) WFContentAttributionTracker * contentAttributionTracker;              //@synthesize contentAttributionTracker=_contentAttributionTracker - In the implementation block
@property (nonatomic,readonly) NSString * widgetSizeClass;                                           //@synthesize widgetSizeClass=_widgetSizeClass - In the implementation block
@property (nonatomic,readonly) long long maximumItemCount;                                           //@synthesize maximumItemCount=_maximumItemCount - In the implementation block
-(WFParameter *)parameter;
-(long long)environment;
-(WFContentAttributionTracker *)contentAttributionTracker;
-(id<WFVariableDataSource>)variableSource;
-(NSString *)widgetSizeClass;
-(id)initWithVariableSource:(id)arg1 parameter:(id)arg2 isInputParameter:(BOOL)arg3 environment:(long long)arg4 contentAttributionTracker:(id)arg5 widgetSizeClass:(id)arg6 ;
-(void)addContentAttributionSet:(id)arg1 ;
-(BOOL)isInputParameter;
-(long long)maximumItemCount;
@end

