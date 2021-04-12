/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class INIntent, NSDictionary;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse {

	BOOL _success;
	INIntent* _updatedIntent;
	NSDictionary* _parameterResolutionResults;

}

@property (getter=isSuccess,nonatomic,readonly) BOOL success;                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) INIntent * updatedIntent;                               //@synthesize updatedIntent=_updatedIntent - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterResolutionResults;              //@synthesize parameterResolutionResults=_parameterResolutionResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isSuccess;
-(void)encodeWithCoder:(id)arg1 ;
-(INIntent *)updatedIntent;
-(id)initWithSuccess:(BOOL)arg1 updatedIntent:(id)arg2 parameterResolutionResults:(id)arg3 error:(id)arg4 ;
-(NSDictionary *)parameterResolutionResults;
-(id)initWithCoder:(id)arg1 ;
@end

