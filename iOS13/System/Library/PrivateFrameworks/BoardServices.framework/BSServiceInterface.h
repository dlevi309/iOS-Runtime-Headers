/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, BSObjCProtocol;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {

	NSString* _identifier;
	BSObjCProtocol* _server;
	BSObjCProtocol* _client;
	CFBooleanRef _clientWaitsForActivation;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long clientMessagingExpectation; 
@property (nonatomic,copy,readonly) BSObjCProtocol * server;                      //@synthesize server=_server - In the implementation block
@property (nonatomic,copy,readonly) BSObjCProtocol * client;                      //@synthesize client=_client - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceWithServer:(id)arg1 client:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BSObjCProtocol *)client;
-(BSObjCProtocol *)server;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 server:(id)arg2 client:(id)arg3 clientWaitsForActivation:(CFBooleanRef)arg4 ;
-(long long)clientMessagingExpectation;
@end

