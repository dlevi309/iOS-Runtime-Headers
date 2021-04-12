/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(long long)intentCategory;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setIntentCategory:(long long)arg1 ;
-(NSString *)verb;
-(NSArray *)steps;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)init;
-(NSString *)appBundleId;
-(NSNumber *)customResponsesDisabled;
-(void)setUnderlyingIntent:(INArchivedObject *)arg1 ;
-(void)setLocalizedAppName:(NSString *)arg1 ;
-(void)setContinueRunning:(NSNumber *)arg1 ;
-(long long)toggleState;
-(void)setCustomResponsesDisabled:(NSNumber *)arg1 ;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(INArchivedObject *)arg1 ;
-(void)setInterstitialDisabled:(NSNumber *)arg1 ;
-(NSString *)underlyingIntentTitle;
-(void)setUnderlyingIntentTitle:(NSString *)arg1 ;
-(NSNumber *)prefersExecutionOnCompanion;
-(void)setPrefersExecutionOnCompanion:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(NSString *)arg1 ;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(void)setSteps:(NSArray *)arg1 ;
-(NSString *)responseTemplate;
-(long long)code;
-(INArchivedObject *)underlyingIntent;
-(NSString *)localizedAppName;
-(NSNumber *)interstitialDisabled;
-(void)setToggleState:(long long)arg1 ;
-(NSNumber *)continueRunning;
-(void)setResponseTemplate:(NSString *)arg1 ;
@end

