/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)humanReadableName;
-(BOOL)requiresPassword;
-(unsigned)applescriptScheme;
-(BOOL)requiresUsername;
-(NSSet *)supportedSASLMechanisms;
@end

