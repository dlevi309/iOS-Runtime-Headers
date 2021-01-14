/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithResolvedIntent:(id)arg1 resolvedParameters:(id)arg2 resolvedAllParametersSuccesfully:(BOOL)arg3 confirmResponse:(id)arg4 handleResponse:(id)arg5 ;
-(id)description;
-(INIntent *)resolvedIntent;
-(INIntentResponse *)handleResponse;
-(NSDictionary *)resolvedParameters;
-(BOOL)resolvedAllParametersSuccesfully;
-(INIntentResponse *)confirmResponse;
@end

