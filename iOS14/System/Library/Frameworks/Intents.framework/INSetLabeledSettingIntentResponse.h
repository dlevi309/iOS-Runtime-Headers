/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INSetLabeledSettingIntentResponseExport.h>

@class NSString;

@interface INSetLabeledSettingIntentResponse : INIntentResponse <INSetLabeledSettingIntentResponseExport>

@property (nonatomic,copy) NSString * previousValue; 
@property (nonatomic,copy) NSString * currentValue; 
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * oldValue; 
@property (nonatomic,copy) NSString * updatedValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(int)_typeFromCode:(long long)arg1 ;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)updatedValue;
-(void)setUpdatedValue:(NSString *)arg1 ;
-(NSString *)errorDetail;
-(void)setErrorDetail:(NSString *)arg1 ;
-(NSString *)oldValue;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(void)setOldValue:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currentValue;
-(long long)code;
-(void)setPreviousValue:(NSString *)arg1 ;
-(NSString *)previousValue;
-(void)setCurrentValue:(NSString *)arg1 ;
@end

