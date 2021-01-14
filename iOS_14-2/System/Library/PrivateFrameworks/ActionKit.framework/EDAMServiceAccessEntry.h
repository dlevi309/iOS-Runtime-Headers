/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMServiceAccessEntry : FATObject {

	NSNumber* _accessTime;
	NSString* _serviceName;
	NSNumber* _userId;
	NSNumber* _authenticatedClientUserId;
	NSNumber* _apiKeyId;
	NSNumber* _businessAdmin;

}

@property (nonatomic,retain) NSNumber * accessTime;                             //@synthesize accessTime=_accessTime - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                            //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * userId;                                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSNumber * authenticatedClientUserId;              //@synthesize authenticatedClientUserId=_authenticatedClientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * apiKeyId;                               //@synthesize apiKeyId=_apiKeyId - In the implementation block
@property (nonatomic,retain) NSNumber * businessAdmin;                          //@synthesize businessAdmin=_businessAdmin - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSNumber *)accessTime;
-(void)setAccessTime:(NSNumber *)arg1 ;
-(NSNumber *)apiKeyId;
-(void)setApiKeyId:(NSNumber *)arg1 ;
-(NSNumber *)authenticatedClientUserId;
-(void)setAuthenticatedClientUserId:(NSNumber *)arg1 ;
-(NSNumber *)businessAdmin;
-(void)setBusinessAdmin:(NSNumber *)arg1 ;
@end

