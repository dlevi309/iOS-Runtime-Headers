/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SACFProvideContext : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * context; 
@property (nonatomic,copy) NSString * contextVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)provideContext;
+(id)provideContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)context;
-(id)groupIdentifier;
-(void)setContext:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)contextVersion;
-(void)setContextVersion:(NSString *)arg1 ;
@end

