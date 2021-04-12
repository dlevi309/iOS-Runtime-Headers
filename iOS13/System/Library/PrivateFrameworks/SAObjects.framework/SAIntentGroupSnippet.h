/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, NSArray, SAIntentGroupProtobufMessage, NSNumber;

@interface SAIntentGroupSnippet : SAUISnippet

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSString * jsonEncodedIntentResponse; 
@property (nonatomic,retain) id<SAServerBoundCommand> processSynapseFlowCommand; 
@property (nonatomic,copy) NSArray * snippetTemplates; 
@property (assign,nonatomic) BOOL widgetAllowed; 
@property (nonatomic,copy) NSNumber * widgetIndex; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSString *)jsonEncodedIntentResponse;
-(void)setJsonEncodedIntentResponse:(NSString *)arg1 ;
-(id<SAServerBoundCommand>)processSynapseFlowCommand;
-(void)setProcessSynapseFlowCommand:(id<SAServerBoundCommand>)arg1 ;
-(NSArray *)snippetTemplates;
-(void)setSnippetTemplates:(NSArray *)arg1 ;
-(BOOL)widgetAllowed;
-(void)setWidgetAllowed:(BOOL)arg1 ;
-(NSNumber *)widgetIndex;
-(void)setWidgetIndex:(NSNumber *)arg1 ;
@end

