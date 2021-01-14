/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@class RWIDriverConfiguration, RWIDriverState, _RWIRelayClientConnection, NSSet, NSString;

@interface _RWIDriverInterfaceInfo : NSObject {

	RWIDriverConfiguration* _configuration;
	RWIDriverState* _state;
	_RWIRelayClientConnection* _connection;
	NSSet* _sessionIdentifiers;

}

@property (nonatomic,readonly) _RWIRelayClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * version; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSSet * sessionIdentifiers;                     //@synthesize sessionIdentifiers=_sessionIdentifiers - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)isActive;
-(NSString *)name;
-(_RWIRelayClientConnection *)connection;
-(id)initWithConfiguration:(id)arg1 connection:(id)arg2 ;
-(NSString *)identifier;
-(NSString *)version;
-(void)updateDriverState:(id)arg1 ;
-(NSSet *)sessionIdentifiers;
@end

