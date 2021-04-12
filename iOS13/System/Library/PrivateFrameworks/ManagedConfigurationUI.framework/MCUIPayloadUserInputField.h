/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(int)type;
-(int)flags;
-(NSString *)title;
-(long long)keyboardType;
-(id)_uuid;
-(NSString *)defaultValue;
-(id)responseDictionary;
-(void)setUserResponse:(id)arg1 ;
-(BOOL)isRequired;
-(id)initWithFieldDictionary:(id)arg1 ;
-(NSNumber *)minimumLength;
-(NSString *)fieldDescription;
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

