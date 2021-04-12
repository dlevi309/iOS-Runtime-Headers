/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)message;
-(NSString *)explanation;
-(NSDictionary *)responseDictionary;
-(NSArray *)buttons;
-(id)initWithResponseDictionary:(id)arg1 ;
-(BOOL)isBiometricAuthenticationAllowed;
-(id)_buttonWithType:(long long)arg1 ;
-(id)_buttonTitleKeyForType:(long long)arg1 ;
-(id)_buttonActionKeyForType:(long long)arg1 ;
-(long long)defaultButtonType;
-(BOOL)isInitialCheckboxValue;
@end

