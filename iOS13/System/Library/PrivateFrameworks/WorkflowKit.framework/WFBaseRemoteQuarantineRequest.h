/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>
#import <libobjc.A.dylib/WFRemoteQuarantineRequest.h>

@class NSString, NSDictionary;

@interface WFBaseRemoteQuarantineRequest : MTLModel <MTLJSONSerializing, WFRemoteQuarantineRequest> {

	NSString* _appVersion;
	NSString* _osVersion;
	NSString* _userLocale;

}

@property (nonatomic,readonly) NSString * appVersion;                                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                       //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * userLocale;                                      //@synthesize userLocale=_userLocale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) NSString * policyFunctionName; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedPromptMessage; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorTitle; 
@property (nonatomic,readonly) NSString * defaultLocalizedDeniedErrorMessage; 
+(id)JSONKeyPathsByPropertyKey;
-(id)init;
-(NSString *)osVersion;
-(NSString *)appVersion;
-(NSString *)userLocale;
-(NSString *)policyFunctionName;
-(NSString *)defaultLocalizedPromptTitle;
-(NSString *)defaultLocalizedPromptMessage;
-(NSString *)defaultLocalizedDeniedErrorTitle;
-(NSString *)defaultLocalizedDeniedErrorMessage;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1 ;
@end

