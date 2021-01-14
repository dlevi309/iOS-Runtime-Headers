/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INSetBinarySettingIntentResponseExport.h>

@class NSString;

@interface INSetBinarySettingIntentResponse : INIntentResponse <INSetBinarySettingIntentResponseExport>

@property (assign,nonatomic) long long previousValue; 
@property (assign,nonatomic) long long currentValue; 
@property (nonatomic,readonly) long long code; 
@property (assign,nonatomic) long long oldValue; 
@property (assign,nonatomic) long long updatedValue; 
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
-(long long)updatedValue;
-(void)setUpdatedValue:(long long)arg1 ;
-(NSString *)errorDetail;
-(void)setErrorDetail:(NSString *)arg1 ;
-(long long)oldValue;
-(long long)_codeWithName:(id)arg1 ;
-(long long)_intentResponseCode;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(id)propertiesByName;
-(void)setOldValue:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)currentValue;
-(long long)code;
-(void)setPreviousValue:(long long)arg1 ;
-(long long)previousValue;
-(void)setCurrentValue:(long long)arg1 ;
@end

