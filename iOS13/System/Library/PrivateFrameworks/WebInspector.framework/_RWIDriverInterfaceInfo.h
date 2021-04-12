/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


@class NSString, _RWIRelayClientConnection;

@interface _RWIDriverInterfaceInfo : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	NSString* _name;
	_RWIRelayClientConnection* _connection;

}

@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _RWIRelayClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                       //@synthesize isActive=_isActive - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_RWIRelayClientConnection *)connection;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 connection:(id)arg3 ;
-(BOOL)updateDriverState:(BOOL)arg1 ;
@end

