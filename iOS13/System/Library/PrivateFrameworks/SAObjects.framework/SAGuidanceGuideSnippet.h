/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIButton, SAUIAppPunchOut, NSArray, NSString;

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (nonatomic,retain) SAUIButton * appPunchOutButton; 
@property (nonatomic,retain) SAUIAppPunchOut * appStorePunchOut; 
@property (nonatomic,copy) NSArray * domainSnippets; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,copy) NSArray * intentEnabledAppSnippets; 
+(id)guideSnippet;
+(id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIButton *)appPunchOutButton;
-(void)setAppPunchOutButton:(SAUIButton *)arg1 ;
-(SAUIAppPunchOut *)appStorePunchOut;
-(void)setAppStorePunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)domainSnippets;
-(void)setDomainSnippets:(NSArray *)arg1 ;
-(NSArray *)intentEnabledAppSnippets;
-(void)setIntentEnabledAppSnippets:(NSArray *)arg1 ;
@end

