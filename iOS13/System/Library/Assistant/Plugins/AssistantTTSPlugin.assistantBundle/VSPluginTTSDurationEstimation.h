/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(void)setRequest:(SATTSEstimateTTSRequestDuration *)arg1 ;
-(SATTSEstimateTTSRequestDuration *)request;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

