/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INIdentifyIncomingCallerIntentResponseExport.h>

@class NSArray, NSString;

@interface INIdentifyIncomingCallerIntentResponse : INIntentResponse <INIdentifyIncomingCallerIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long statusCode; 
@property (nonatomic,copy) NSArray * callRecords; 
@property (nonatomic,copy) NSArray * recentMissedCalls; 
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
-(long long)statusCode;
-(id)propertiesByName;
-(id)_dictionaryRepresentation;
-(void)setStatusCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(NSArray *)callRecords;
-(void)setCallRecords:(NSArray *)arg1 ;
-(NSArray *)recentMissedCalls;
-(void)setRecentMissedCalls:(NSArray *)arg1 ;
@end

