/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@class NSMutableDictionary, NSNumber, NSString;

@interface MCUIPayloadUserInputField : NSObject {

	NSMutableDictionary* _fieldDictionary;
	id _response;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int flags; 
@property (nonatomic,readonly) NSNumber * minimumLength; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,retain) NSString * fieldDescription; 
@property (nonatomic,readonly) NSString * retypeDescription; 
@property (nonatomic,readonly) NSString * mismatchDescription; 
@property (nonatomic,retain) NSString * finePrint; 
@property (nonatomic,readonly) NSString * defaultValue; 
@property (nonatomic,readonly) NSString * placeholderValue; 
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long capitalizationType; 
@property (nonatomic,readonly) BOOL isRequired; 
@property (nonatomic,readonly) BOOL isPassword; 
@property (nonatomic,readonly) BOOL needsRetype; 
@property (nonatomic,readonly) BOOL isDevicePasscodeField; 
-(long long)keyboardType;
-(BOOL)isRequired;
-(NSString *)defaultValue;
-(int)flags;
-(id)responseDictionary;
-(id)description;
-(int)type;
-(void)setUserResponse:(id)arg1 ;
-(id)_uuid;
-(NSString *)title;
-(NSString *)fieldDescription;
-(id)initWithFieldDictionary:(id)arg1 ;
-(NSNumber *)minimumLength;
-(void)setFieldDescription:(NSString *)arg1 ;
-(NSString *)retypeDescription;
-(NSString *)mismatchDescription;
-(NSString *)finePrint;
-(void)setFinePrint:(NSString *)arg1 ;
-(NSString *)placeholderValue;
-(long long)capitalizationType;
-(BOOL)isPassword;
-(BOOL)needsRetype;
-(BOOL)isDevicePasscodeField;
@end

