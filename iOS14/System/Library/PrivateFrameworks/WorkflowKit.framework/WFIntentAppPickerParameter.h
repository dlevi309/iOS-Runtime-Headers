/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter {

	BOOL _includesUserActivityBasedApps;
	NSString* _intentName;

}

@property (nonatomic,readonly) NSString * intentName;                           //@synthesize intentName=_intentName - In the implementation block
@property (nonatomic,readonly) BOOL includesUserActivityBasedApps;              //@synthesize includesUserActivityBasedApps=_includesUserActivityBasedApps - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(BOOL)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(BOOL)alwaysShowsButton;
-(NSString *)intentName;
-(BOOL)includesUserActivityBasedApps;
@end

