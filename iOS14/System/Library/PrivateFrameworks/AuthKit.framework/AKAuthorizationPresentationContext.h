/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, AKCredentialRequestContext, AKUserInformation, NSArray;

@interface AKAuthorizationPresentationContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleID;
	NSString* _localizedAppName;
	NSString* _informativeText;
	NSString* _iconName;
	NSData* _iconData;
	NSNumber* _iconScale;
	AKCredentialRequestContext* _credentialRequestContext;
	AKUserInformation* _userInformation;
	NSArray* _loginChoices;

}

@property (nonatomic,copy) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedAppName;                                 //@synthesize localizedAppName=_localizedAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * informativeText;                                  //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconName;                                         //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;                                           //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iconScale;                                        //@synthesize iconScale=_iconScale - In the implementation block
@property (nonatomic,retain) AKCredentialRequestContext * credentialRequestContext;              //@synthesize credentialRequestContext=_credentialRequestContext - In the implementation block
@property (nonatomic,retain) AKUserInformation * userInformation;                                //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,copy) NSArray * loginChoices;                                               //@synthesize loginChoices=_loginChoices - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)presentationContextForRequestContext:(id)arg1 client:(id)arg2 ;
-(NSNumber *)iconScale;
-(void)setBundleID:(NSString *)arg1 ;
-(NSData *)iconData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)loginChoices;
-(void)_addPresenterParameters;
-(id)initWithContext:(id)arg1 bundleID:(id)arg2 ;
-(void)_addPresentationParametersForContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 client:(id)arg2 ;
-(void)setLoginChoices:(NSArray *)arg1 ;
-(AKCredentialRequestContext *)credentialRequestContext;
-(void)setCredentialRequestContext:(AKCredentialRequestContext *)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedAppName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)informativeText;
-(AKUserInformation *)userInformation;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(NSString *)iconName;
@end

