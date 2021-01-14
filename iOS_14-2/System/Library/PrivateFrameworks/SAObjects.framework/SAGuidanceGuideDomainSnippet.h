/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, NSURL, NSArray;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (nonatomic,copy) NSString * domainAlternateDisplayName; 
@property (nonatomic,copy) NSString * domainDisplayName; 
@property (nonatomic,copy) NSURL * domainIconURI; 
@property (nonatomic,copy) NSString * domainName; 
@property (assign,nonatomic) BOOL enabledInOfflineMode; 
@property (assign,nonatomic) BOOL enabledInOnlineMode; 
@property (nonatomic,copy) NSArray * guideSections; 
@property (nonatomic,copy) NSString * iconDisplayIdentifier; 
@property (assign,nonatomic) BOOL iconNeedsProcessing; 
@property (nonatomic,copy) NSString * iconResourceName; 
@property (assign,nonatomic) BOOL isAppIcon; 
@property (assign,nonatomic) BOOL performIntentEnabledAppAuthorizationCheck; 
@property (nonatomic,copy) NSString * tagPhrase; 
+(id)guideDomainSnippet;
+(id)guideDomainSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domainName;
-(id)groupIdentifier;
-(void)setDomainName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)iconDisplayIdentifier;
-(NSString *)domainAlternateDisplayName;
-(void)setDomainAlternateDisplayName:(NSString *)arg1 ;
-(void)setDomainDisplayName:(NSString *)arg1 ;
-(NSURL *)domainIconURI;
-(void)setDomainIconURI:(NSURL *)arg1 ;
-(BOOL)enabledInOfflineMode;
-(NSString *)domainDisplayName;
-(void)setEnabledInOfflineMode:(BOOL)arg1 ;
-(BOOL)enabledInOnlineMode;
-(void)setEnabledInOnlineMode:(BOOL)arg1 ;
-(NSArray *)guideSections;
-(void)setGuideSections:(NSArray *)arg1 ;
-(void)setIconDisplayIdentifier:(NSString *)arg1 ;
-(BOOL)iconNeedsProcessing;
-(void)setIconNeedsProcessing:(BOOL)arg1 ;
-(NSString *)iconResourceName;
-(void)setIconResourceName:(NSString *)arg1 ;
-(BOOL)isAppIcon;
-(void)setIsAppIcon:(BOOL)arg1 ;
-(BOOL)performIntentEnabledAppAuthorizationCheck;
-(void)setPerformIntentEnabledAppAuthorizationCheck:(BOOL)arg1 ;
-(NSString *)tagPhrase;
-(void)setTagPhrase:(NSString *)arg1 ;
@end

