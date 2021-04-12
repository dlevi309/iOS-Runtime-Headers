/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray;

@interface SACFAbstractClientCommand : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * jsFileNameSuffix; 
@property (nonatomic,copy) NSArray * jsLibraries; 
@property (nonatomic,copy) NSString * jsParameters; 
@property (nonatomic,copy) NSString * jsScript; 
@property (assign,nonatomic) BOOL shouldCacheBytecode; 
@property (assign,nonatomic) BOOL shouldCacheScript; 
@property (assign,nonatomic) BOOL shouldRestartContext; 
+(id)abstractClientCommand;
+(id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(id)groupIdentifier;
-(void)setDomain:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)jsScript;
-(void)setJsScript:(NSString *)arg1 ;
-(BOOL)shouldCacheScript;
-(void)setShouldCacheScript:(BOOL)arg1 ;
-(NSString *)jsFileNameSuffix;
-(void)setJsFileNameSuffix:(NSString *)arg1 ;
-(NSArray *)jsLibraries;
-(void)setJsLibraries:(NSArray *)arg1 ;
-(NSString *)jsParameters;
-(void)setJsParameters:(NSString *)arg1 ;
-(BOOL)shouldCacheBytecode;
-(void)setShouldCacheBytecode:(BOOL)arg1 ;
-(BOOL)shouldRestartContext;
-(void)setShouldRestartContext:(BOOL)arg1 ;
@end

