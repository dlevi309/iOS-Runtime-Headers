/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CARSession, NSString;

@interface CARSessionScreenBorrowToken : NSObject {

	CARSession* _session;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,__weak,readonly) CARSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * client;                   //@synthesize client=_client - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(NSString *)client;
-(CARSession *)session;
-(void)unborrowToken;
-(id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
-(NSString *)reason;
-(void)dealloc;
@end

