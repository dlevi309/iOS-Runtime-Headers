/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)reason;
-(NSString *)client;
-(CARSession *)session;
-(void)unborrowToken;
-(id)initWithSession:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
@end

