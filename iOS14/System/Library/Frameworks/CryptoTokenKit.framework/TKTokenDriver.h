/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@protocol TKTokenDriverDelegate;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKTokenDriverContext, NSMutableDictionary, TKSharedResourceSlot, NSDictionary, NSString, NSArray;

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
@property (nonatomic,readonly) NSArray * tokenSessions; 
@property (__weak) id<TKTokenDriverDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(id)createDriver;
-(void)setKeepAlive:(id)arg1 ;
-(id)init;
-(void)acquireTokenWithInstanceID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id<TKTokenDriverDelegate>)delegate;
-(void)terminate;
-(TKTokenDriverContext *)context;
-(void)setDelegate:(id<TKTokenDriverDelegate>)arg1 ;
-(NSString *)classID;
-(void)configureWithReply:(/*^block*/id)arg1 ;
-(void)setExtensionAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)extensionAttributes;
-(NSMutableDictionary *)tokenConnections;
-(id)endpointForToken:(id)arg1 ;
-(void)getTokenWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)createTokenWithSlot:(id)arg1 AID:(id)arg2 error:(id*)arg3 ;
-(void)releaseTokenWithInstanceID:(id)arg1 ;
-(NSArray *)tokenSessions;
-(TKSharedResourceSlot *)keepAliveResourceSlot;
-(void)setKeepAliveResourceSlot:(TKSharedResourceSlot *)arg1 ;
-(void)auditAuthOperation:(id)arg1 auditToken:(SCD_Struct_TK0)arg2 success:(BOOL)arg3 ;
-(id)keepAlive;
-(void)acquireTokenWithSlot:(id)arg1 AID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setContext:(TKTokenDriverContext *)arg1 ;
@end

