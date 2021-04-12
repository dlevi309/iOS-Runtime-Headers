/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INRunVoiceCommandIntentResponseExport.h>

@class NSString, NSNumber, NSDictionary, INArchivedObject, NSArray;

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport>

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
-(NSDictionary *)parameters;
-(NSString *)verb;
-(id)propertiesByName;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)localizedAppName;
-(NSArray *)steps;
-(void)setSteps:(NSArray *)arg1 ;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(void)setVerb:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(long long)intentCategory;
-(void)setIntentCategory:(long long)arg1 ;
-(NSNumber *)customResponsesDisabled;
-(void)setCustomResponsesDisabled:(NSNumber *)arg1 ;
-(NSString *)responseTemplate;
-(void)setResponseTemplate:(NSString *)arg1 ;
-(INArchivedObject *)underlyingIntent;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(long long)toggleState;
-(void)setToggleState:(long long)arg1 ;
-(NSNumber *)continueRunning;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(NSNumber *)interstitialDisabled;
-(void)setInterstitialDisabled:(NSNumber *)arg1 ;
-(NSString *)underlyingIntentTitle;
-(void)setUnderlyingIntentTitle:(NSString *)arg1 ;
-(NSNumber *)prefersExecutionOnCompanion;
-(void)setPrefersExecutionOnCompanion:(NSNumber *)arg1 ;
@end

