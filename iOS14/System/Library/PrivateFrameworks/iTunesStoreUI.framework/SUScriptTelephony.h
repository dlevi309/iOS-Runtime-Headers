/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptTelephony : SUScriptObject

@property (getter=isCellularRoaming,nonatomic,readonly) id cellularRoaming; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (nonatomic,readonly) NSString * operatorName; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * providerName; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)operatorName;
-(NSString *)countryCode;
-(id)init;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(NSString *)phoneNumber;
-(id)attributeKeys;
-(id)_className;
-(void)dealloc;
-(NSString *)providerName;
-(id)scriptAttributeKeys;
-(id)formattedPhoneNumber:(id)arg1 ;
-(id)isCellularRoaming;
-(void)_handleOperatorNameChangedNotification:(id)arg1 ;
-(void)_handlePhoneNumberChangedNotification:(id)arg1 ;
-(void)_handleRegistrationChangedNotification:(id)arg1 ;
-(BOOL)_checkIfIsAllowed;
-(id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
@end

