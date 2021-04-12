/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(SAIntentGroupProtobufMessage *)intent;
-(NSString *)appId;
-(id)groupIdentifier;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
-(id<SAServerBoundCommand>)processSynapseFlowCommand;
-(void)setProcessSynapseFlowCommand:(id<SAServerBoundCommand>)arg1 ;
-(NSArray *)snippetTemplates;
-(void)setSnippetTemplates:(NSArray *)arg1 ;
-(BOOL)widgetAllowed;
-(void)setWidgetAllowed:(BOOL)arg1 ;
-(void)setWidgetIndex:(NSNumber *)arg1 ;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)jsonEncodedIntentResponse;
-(void)setJsonEncodedIntentResponse:(NSString *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(void)setAppId:(NSString *)arg1 ;
-(NSNumber *)widgetIndex;
@end

