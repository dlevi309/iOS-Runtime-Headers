/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKTransaction.h>

@protocol SBKKeyValuePayloadPair;
@class NSString;

@interface SBKPushValueTransaction : SBKTransaction {

	BOOL _isRechedulable;
	BOOL _success;
	id<SBKKeyValuePayloadPair> _clientItemPayloadPair;
	NSString* _clientItemVersionAnchor;
	id<SBKKeyValuePayloadPair> _requestItemPayloadPair;
	NSString* _requestItemVersionAnchor;
	id<SBKKeyValuePayloadPair> _resultItemPayloadPair;
	NSString* _resultItemVersionAnchor;
	NSString* _resultDomainVersion;

}

@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair;               //@synthesize clientItemPayloadPair=_clientItemPayloadPair - In the implementation block
@property (readonly) NSString * clientItemVersionAnchor;                             //@synthesize clientItemVersionAnchor=_clientItemVersionAnchor - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> requestItemPayloadPair;              //@synthesize requestItemPayloadPair=_requestItemPayloadPair - In the implementation block
@property (readonly) NSString * requestItemVersionAnchor;                            //@synthesize requestItemVersionAnchor=_requestItemVersionAnchor - In the implementation block
@property (readonly) BOOL success;                                                   //@synthesize success=_success - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair;               //@synthesize resultItemPayloadPair=_resultItemPayloadPair - In the implementation block
@property (readonly) NSString * resultItemVersionAnchor;                             //@synthesize resultItemVersionAnchor=_resultItemVersionAnchor - In the implementation block
@property (readonly) NSString * resultDomainVersion;                                 //@synthesize resultDomainVersion=_resultDomainVersion - In the implementation block
-(id)description;
-(BOOL)success;
-(id)newRequest;
-(NSString *)clientItemVersionAnchor;
-(id)clampsKey;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_resolveConflictBetweenClientPayloadPair:(id)arg1 andServerPayloadPair:(id)arg2 ;
-(id)initWithStoreBagContext:(id)arg1 clientItemPayloadPair:(id)arg2 clientItemVersionAnchor:(id)arg3 ;
-(id<SBKKeyValuePayloadPair>)clientItemPayloadPair;
-(id<SBKKeyValuePayloadPair>)requestItemPayloadPair;
-(NSString *)requestItemVersionAnchor;
-(id<SBKKeyValuePayloadPair>)resultItemPayloadPair;
-(NSString *)resultItemVersionAnchor;
-(NSString *)resultDomainVersion;
@end

