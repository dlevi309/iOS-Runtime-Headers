/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSArray;

@interface ICStoreDialogResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * explanation; 
@property (getter=isInitialCheckboxValue,nonatomic,readonly) BOOL initialCheckboxValue; 
@property (getter=isBiometricAuthenticationAllowed,nonatomic,readonly) BOOL biometricAuthenticationAllowed; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (nonatomic,copy,readonly) NSArray * buttons; 
@property (nonatomic,readonly) long long defaultButtonType; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;                                                   //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(NSString *)message;
-(NSArray *)buttons;
-(id)debugDescription;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(long long)type;
-(NSString *)explanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_buttonWithType:(long long)arg1 ;
-(id)_buttonTitleKeyForType:(long long)arg1 ;
-(id)_buttonActionKeyForType:(long long)arg1 ;
-(long long)defaultButtonType;
-(BOOL)isInitialCheckboxValue;
-(BOOL)isBiometricAuthenticationAllowed;
@end

