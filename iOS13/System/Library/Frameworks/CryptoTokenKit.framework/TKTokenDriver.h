/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenDriverDelegate;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKTokenDriverContext, NSMutableDictionary, TKSharedResourceSlot, NSDictionary, NSString;

@interface TKTokenDriver : NSObject {

	id _keepAlive;
	id<TKTokenDriverDelegate> _delegate;
	TKTokenDriverContext* _context;
	NSMutableDictionary* _tokenConnections;
	TKSharedResourceSlot* _keepAliveResourceSlot;
	NSDictionary* _extensionAttributes;

}

@property (assign,nonatomic,__weak) TKTokenDriverContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokenConnections;                  //@synthesize tokenConnections=_tokenConnections - In the implementation block
@property (nonatomic,retain) id keepAlive; 
@property (nonatomic,retain) TKSharedResourceSlot * keepAliveResourceSlot;              //@synthesize keepAliveResourceSlot=_keepAliveResourceSlot - In the implementation block
@property (readonly) NSString * classID; 
@property (retain) NSDictionary * extensionAttributes;                                  //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (__weak) id<TKTokenDriverDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(id)createDriver;
-(id)init;
-(void)dealloc;
-(id<TKTokenDriverDelegate>)delegate;
-(void)setDelegate:(id<TKTokenDriverDelegate>)arg1 ;
-(TKTokenDriverContext *)context;
-(void)terminate;
-(void)setContext:(TKTokenDriverContext *)arg1 ;
-(id)keepAlive;
-(void)setKeepAlive:(id)arg1 ;
-(NSString *)classID;
-(NSDictionary *)extensionAttributes;
-(void)setExtensionAttributes:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)tokenConnections;
-(id)endpointForToken:(id)arg1 ;
-(void)getTokenWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)createTokenWithSlot:(id)arg1 AID:(id)arg2 error:(id*)arg3 ;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)releaseTokenWithInstanceID:(id)arg1 ;
-(void)configureWithReply:(/*^block*/id)arg1 ;
-(TKSharedResourceSlot *)keepAliveResourceSlot;
-(void)setKeepAliveResourceSlot:(TKSharedResourceSlot *)arg1 ;
@end

