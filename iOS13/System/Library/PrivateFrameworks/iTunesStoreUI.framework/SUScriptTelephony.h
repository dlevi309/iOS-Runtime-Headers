/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)countryCode;
-(NSString *)phoneNumber;
-(id)_className;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(id)attributeKeys;
-(NSString *)providerName;
-(NSString *)operatorName;
-(id)scriptAttributeKeys;
-(id)formattedPhoneNumber:(id)arg1 ;
-(id)isCellularRoaming;
-(void)_handleOperatorNameChangedNotification:(id)arg1 ;
-(void)_handlePhoneNumberChangedNotification:(id)arg1 ;
-(void)_handleRegistrationChangedNotification:(id)arg1 ;
-(BOOL)_checkIfIsAllowed;
-(id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
@end

