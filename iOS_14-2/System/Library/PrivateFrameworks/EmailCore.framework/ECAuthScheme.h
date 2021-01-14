/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


#import <EmailCore/EmailCore-Structs.h>
@class NSSet, NSString;

@interface ECAuthScheme : NSObject

@property (nonatomic,copy,readonly) NSSet * supportedSASLMechanisms; 
@property (nonatomic,readonly) BOOL requiresUsername; 
@property (nonatomic,readonly) BOOL requiresPassword; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * humanReadableName; 
@property (nonatomic,readonly) unsigned applescriptScheme; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)knownSchemes;
+(id)schemeWithName:(id)arg1 ;
+(id)schemeWithApplescriptScheme:(unsigned)arg1 ;
-(BOOL)requiresPassword;
-(BOOL)requiresUsername;
-(NSString *)name;
-(NSString *)humanReadableName;
-(unsigned)applescriptScheme;
-(NSSet *)supportedSASLMechanisms;
@end

