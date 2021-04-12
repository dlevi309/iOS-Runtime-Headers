/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * flowScriptHint; 
@property (nonatomic,copy) NSArray * scriptIdentifiers; 
@property (nonatomic,retain) SACFAbstractClientCommand * signalPayload; 
+(id)signal;
+(id)signalWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(id)groupIdentifier;
-(void)setDomain:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)scriptIdentifiers;
-(void)setScriptIdentifiers:(NSArray *)arg1 ;
-(NSString *)flowScriptHint;
-(void)setFlowScriptHint:(NSString *)arg1 ;
-(SACFAbstractClientCommand *)signalPayload;
-(void)setSignalPayload:(SACFAbstractClientCommand *)arg1 ;
@end

