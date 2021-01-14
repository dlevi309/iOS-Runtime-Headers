/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INArchivedObject, NSString, NSNumber, NSArray;


@protocol INRunWorkflowIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSNumber * waitingForResume; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,copy) NSNumber * requestsIntentExecution; 
@required
-(NSArray *)steps;
-(NSString *)utterance;
-(void)setUnderlyingIntent:(id)arg1;
-(void)setContinueRunning:(id)arg1;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(id)arg1;
-(void)setUtterance:(id)arg1;
-(void)setWaitingForResume:(id)arg1;
-(NSNumber *)requestsIntentExecution;
-(void)setRequestsIntentExecution:(id)arg1;
-(void)setSteps:(id)arg1;
-(long long)code;
-(INArchivedObject *)underlyingIntent;
-(NSNumber *)continueRunning;
-(NSNumber *)waitingForResume;

@end

