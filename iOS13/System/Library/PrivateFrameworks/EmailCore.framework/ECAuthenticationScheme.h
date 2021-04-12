/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)humanReadableName;
-(BOOL)requiresPassword;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(BOOL)hasEncryption;
-(id)authenticatorForAccount:(id)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
@end

