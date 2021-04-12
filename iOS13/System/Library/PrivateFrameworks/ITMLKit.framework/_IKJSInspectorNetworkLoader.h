/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKNetworkRequestLoader.h>

@class NSString, IKJSInspectorNetworkAgent, RWIProtocolNetworkDomainEventDispatcher, NSMutableDictionary;

@interface _IKJSInspectorNetworkLoader : NSObject <IKNetworkRequestLoader> {

	NSString* _parentIdentifier;
	NSString* _identifier;
	IKJSInspectorNetworkAgent* _agent;
	RWIProtocolNetworkDomainEventDispatcher* _dispatcher;
	NSMutableDictionary* _requestRecords;

}

@property (nonatomic,copy) NSString * parentIdentifier;                                                  //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) IKJSInspectorNetworkAgent * agent;                                 //@synthesize agent=_agent - In the implementation block
@property (nonatomic,__weak,readonly) RWIProtocolNetworkDomainEventDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * requestRecords;                                     //@synthesize requestRecords=_requestRecords - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(NSString *)identifier;
-(IKJSInspectorNetworkAgent *)agent;
-(NSString *)parentIdentifier;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(RWIProtocolNetworkDomainEventDispatcher *)dispatcher;
-(id)_recordForResource:(long long)arg1 withInitiator:(long long)arg2 synchronousOperation:(BOOL)arg3 ;
-(NSMutableDictionary *)requestRecords;
-(id)recordForResource:(long long)arg1 withInitiator:(long long)arg2 ;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 agent:(id)arg3 dispatcher:(id)arg4 ;
-(void)dispatchEventWithBlock:(/*^block*/id)arg1 ;
-(double)currentTimeIntervalSince1970;
@end

