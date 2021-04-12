/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/WFAskForInputIntentHandling.h>

@class NSString;

@interface WFAskForInputIntentHandler : NSObject <WFAskForInputIntentHandling> {

	BOOL _resolvedValue;

}

@property (assign,nonatomic) BOOL resolvedValue;                    //@synthesize resolvedValue=_resolvedValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)resolvedValue;
-(void)setResolvedValue:(BOOL)arg1 ;
-(void)handleAskForInput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveQuestionForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveTypeForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStringAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveNumberAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveUrlAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDefaultURLAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDateAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveTimeAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveDateAndTimeAnswerForAskForInput:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

