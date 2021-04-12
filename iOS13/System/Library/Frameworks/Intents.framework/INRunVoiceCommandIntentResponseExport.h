/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, NSNumber, NSDictionary, INArchivedObject, NSArray;


@protocol INRunVoiceCommandIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * appBundleId; 
@property (assign,nonatomic) long long intentCategory; 
@property (nonatomic,copy) NSNumber * customResponsesDisabled; 
@property (nonatomic,copy) NSString * responseTemplate; 
@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) NSString * localizedAppName; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (assign,nonatomic) long long toggleState; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSNumber * interstitialDisabled; 
@property (nonatomic,copy) NSString * underlyingIntentTitle; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,copy) NSNumber * prefersExecutionOnCompanion; 
@required
-(long long)code;
-(NSDictionary *)parameters;
-(NSString *)verb;
-(void)setParameters:(id)arg1;
-(NSString *)localizedAppName;
-(NSArray *)steps;
-(void)setSteps:(id)arg1;
-(void)setLocalizedAppName:(id)arg1;
-(void)setVerb:(id)arg1;
-(NSString *)appBundleId;
-(void)setAppBundleId:(id)arg1;
-(long long)intentCategory;
-(void)setIntentCategory:(long long)arg1;
-(NSNumber *)customResponsesDisabled;
-(void)setCustomResponsesDisabled:(id)arg1;
-(NSString *)responseTemplate;
-(void)setResponseTemplate:(id)arg1;
-(INArchivedObject *)underlyingIntent;
-(void)setUnderlyingIntent:(id)arg1;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(id)arg1;
-(long long)toggleState;
-(void)setToggleState:(long long)arg1;
-(NSNumber *)continueRunning;
-(void)setContinueRunning:(id)arg1;
-(NSNumber *)interstitialDisabled;
-(void)setInterstitialDisabled:(id)arg1;
-(NSString *)underlyingIntentTitle;
-(void)setUnderlyingIntentTitle:(id)arg1;
-(NSNumber *)prefersExecutionOnCompanion;
-(void)setPrefersExecutionOnCompanion:(id)arg1;

@end

