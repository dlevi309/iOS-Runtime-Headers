/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class INIntent, NSDictionary, INIntentResponse;

@interface INIntentTestResult : NSObject {

	BOOL _resolvedAllParametersSuccesfully;
	INIntent* _resolvedIntent;
	NSDictionary* _resolvedParameters;
	INIntentResponse* _confirmResponse;
	INIntentResponse* _handleResponse;

}

@property (nonatomic,readonly) INIntent * resolvedIntent;                           //@synthesize resolvedIntent=_resolvedIntent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * resolvedParameters;              //@synthesize resolvedParameters=_resolvedParameters - In the implementation block
@property (nonatomic,readonly) BOOL resolvedAllParametersSuccesfully;               //@synthesize resolvedAllParametersSuccesfully=_resolvedAllParametersSuccesfully - In the implementation block
@property (nonatomic,readonly) INIntentResponse * confirmResponse;                  //@synthesize confirmResponse=_confirmResponse - In the implementation block
@property (nonatomic,readonly) INIntentResponse * handleResponse;                   //@synthesize handleResponse=_handleResponse - In the implementation block
-(id)description;
-(id)dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithResolvedIntent:(id)arg1 resolvedParameters:(id)arg2 resolvedAllParametersSuccesfully:(BOOL)arg3 confirmResponse:(id)arg4 handleResponse:(id)arg5 ;
-(INIntent *)resolvedIntent;
-(NSDictionary *)resolvedParameters;
-(BOOL)resolvedAllParametersSuccesfully;
-(INIntentResponse *)confirmResponse;
-(INIntentResponse *)handleResponse;
@end

