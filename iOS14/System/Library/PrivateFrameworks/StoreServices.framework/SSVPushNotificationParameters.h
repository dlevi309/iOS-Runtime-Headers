/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface SSVPushNotificationParameters : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSString* _environmentName;
	NSMutableDictionary* _parameterDictionary;
	long long _requestType;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSArray * mediaKinds; 
@property (nonatomic,copy) NSString * notificationType; 
@property (nonatomic,copy) NSDictionary * putParameters; 
@property (assign,nonatomic) long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setRequestType:(long long)arg1 ;
-(id)init;
-(long long)requestType;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(void)setMediaKinds:(NSArray *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setNotificationType:(NSString *)arg1 ;
-(NSDictionary *)putParameters;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setPutParameters:(NSDictionary *)arg1 ;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(NSString *)environmentName;
-(id)_copyParametersDictionary;
-(NSString *)notificationType;
-(NSArray *)mediaKinds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForParameter:(id)arg1 ;
@end

