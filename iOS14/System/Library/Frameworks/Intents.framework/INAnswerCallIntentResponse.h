/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INAnswerCallIntentResponseExport.h>

@class NSArray, INConnectedCall, NSString;

@interface INAnswerCallIntentResponse : INIntentResponse <INAnswerCallIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,copy) NSArray * callRecords; 
@property (nonatomic,copy) INConnectedCall * answeredCall; 
@property (nonatomic,copy) NSArray * recentMissedCalls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(void)setRecentMissedCalls:(NSArray *)arg1 ;
-(void)setAnsweredCall:(INConnectedCall *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)callRecords;
-(void)setStatusCode:(long long)arg1 ;
-(void)setCallRecords:(NSArray *)arg1 ;
-(long long)statusCode;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
-(INConnectedCall *)answeredCall;
-(NSArray *)recentMissedCalls;
@end

