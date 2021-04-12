/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString, NSDictionary;

@interface IKJSRWIDependencyDomain : NSObject {

	NSString* _identifier;
	Class _agentClass;
	NSDictionary* _types;
	NSDictionary* _commands;
	NSDictionary* _events;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) Class agentClass;                                //@synthesize agentClass=_agentClass - In the implementation block
@property (nonatomic,readonly) NSString * dispatcherClassString; 
@property (nonatomic,readonly) NSDictionary * types;                          //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) NSDictionary * commands;                       //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSDictionary * events;                         //@synthesize events=_events - In the implementation block
+(id)allDomains;
+(id)allowedDomains;
+(id)domainAgentClassMap;
+(void)processDomains:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)events;
-(NSDictionary *)types;
-(Class)agentClass;
-(void)setAgentClass:(Class)arg1 ;
-(NSDictionary *)commands;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)dispatcherClassString;
-(id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2 ;
-(BOOL)isValidForTypesWithError:(id*)arg1 ;
-(BOOL)isValidForAgentWithError:(id*)arg1 ;
-(BOOL)isValidForEventsWithError:(id*)arg1 ;
@end

