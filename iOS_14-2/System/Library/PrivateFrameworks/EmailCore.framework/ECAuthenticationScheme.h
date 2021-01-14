/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (nonatomic,readonly) BOOL hasEncryption; 
@property (nonatomic,readonly) BOOL requiresPassword; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * humanReadableName; 
+(void)initialize;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(id)authenticationSchemesForAccount:(id)arg1 connection:(id)arg2 ;
+(void)registerSchemeClass:(Class)arg1 ;
-(BOOL)requiresPassword;
-(NSString *)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(NSString *)humanReadableName;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(BOOL)hasEncryption;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
@end

