/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INRunWorkflowIntentResponseExport.h>

@class INArchivedObject, NSString, NSNumber, NSArray;

@interface INRunWorkflowIntentResponse : INIntentResponse <INRunWorkflowIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSNumber * waitingForResume; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,copy) NSNumber * requestsIntentExecution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(NSArray *)steps;
-(NSString *)utterance;
-(id)init;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(BOOL)_shouldForwardIntentToApp;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(void)setUtterance:(NSString *)arg1 ;
-(void)setWaitingForResume:(NSNumber *)arg1 ;
-(NSNumber *)requestsIntentExecution;
-(void)setRequestsIntentExecution:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(long long)code;
-(INArchivedObject *)underlyingIntent;
-(NSNumber *)continueRunning;
-(NSNumber *)waitingForResume;
@end

