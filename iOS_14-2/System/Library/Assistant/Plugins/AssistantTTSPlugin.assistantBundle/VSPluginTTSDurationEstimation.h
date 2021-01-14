/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/AssistantTTSPlugin.assistantBundle/AssistantTTSPlugin
*/

#import <libobjc.A.dylib/AFServiceCommand.h>

@class SATTSEstimateTTSRequestDuration, NSString;

@interface VSPluginTTSDurationEstimation : NSObject <AFServiceCommand> {

	SATTSEstimateTTSRequestDuration* _request;

}

@property (nonatomic,retain) SATTSEstimateTTSRequestDuration * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequest:(SATTSEstimateTTSRequestDuration *)arg1 ;
-(SATTSEstimateTTSRequestDuration *)request;
-(id)initWithDictionary:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

