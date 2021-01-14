/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Foundation/NSOperation.h>

@protocol INIntentResolutionResultDataProviding, INIntentParameterOptionsProviding;
@class INIntent, INIntentSlotDescription;

@interface INResolutionResultTransformationOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	id<INIntentResolutionResultDataProviding> _result;
	INIntent* _intent;
	INIntentSlotDescription* _intentSlotDescription;
	id<INIntentParameterOptionsProviding> _optionsProvider;
	/*^block*/id _returnBlock;

}

@property (nonatomic,readonly) id<INIntentResolutionResultDataProviding> result;                   //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                                  //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentSlotDescription * intentSlotDescription;                    //@synthesize intentSlotDescription=_intentSlotDescription - In the implementation block
@property (nonatomic,readonly) id<INIntentParameterOptionsProviding> optionsProvider;              //@synthesize optionsProvider=_optionsProvider - In the implementation block
@property (nonatomic,copy) id returnBlock;                                                         //@synthesize returnBlock=_returnBlock - In the implementation block
-(INIntent *)intent;
-(void)start;
-(BOOL)isFinished;
-(id<INIntentResolutionResultDataProviding>)result;
-(BOOL)isExecuting;
-(INIntentSlotDescription *)intentSlotDescription;
-(id<INIntentParameterOptionsProviding>)optionsProvider;
-(id)initWithResult:(id)arg1 intent:(id)arg2 intentSlotDescription:(id)arg3 optionsProvider:(id)arg4 ;
-(id)returnBlock;
-(void)setReturnBlock:(id)arg1 ;
@end

