/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertiesByName;
-(id)_dictionaryRepresentation;
-(NSArray *)steps;
-(void)setSteps:(NSArray *)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(BOOL)_shouldForwardIntentToApp;
-(INArchivedObject *)underlyingIntent;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(NSNumber *)continueRunning;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(NSNumber *)requestsIntentExecution;
-(void)setRequestsIntentExecution:(NSNumber *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(NSNumber *)waitingForResume;
-(void)setWaitingForResume:(NSNumber *)arg1 ;
@end

