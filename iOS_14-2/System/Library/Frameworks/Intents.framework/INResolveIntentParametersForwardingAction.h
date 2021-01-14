/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentForwardingAction.h>

@class NSArray;

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction {

	BOOL _resolvesAllParameters;
	NSArray* _parameterNames;

}

@property (nonatomic,readonly) BOOL resolvesAllParameters;              //@synthesize resolvesAllParameters=_resolvesAllParameters - In the implementation block
@property (nonatomic,readonly) NSArray * parameterNames;                //@synthesize parameterNames=_parameterNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(id)initWithIntent:(id)arg1 parameterNames:(id)arg2 ;
-(id)initWithIntent:(id)arg1 parameterName:(id)arg2 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_completionHandlerForMultipleParametersWithActionCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_completionHandlerForSingleParameterNamed:(id)arg1 withActionCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)resolvesAllParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)parameterNames;
@end

