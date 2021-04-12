/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSXPCConnection, NSString;

@interface NPKTransientPassAssertion : NSObject {

	BOOL _requestServiceMode;
	BOOL _disableCardSelection;
	NSXPCConnection* _xpcConnection;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                          //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL requestServiceMode;                      //@synthesize requestServiceMode=_requestServiceMode - In the implementation block
@property (assign,nonatomic) BOOL disableCardSelection;                    //@synthesize disableCardSelection=_disableCardSelection - In the implementation block
-(void)invalidate;
-(NSString *)uniqueID;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(id)_remoteObjectProxy;
-(void)setDisableCardSelection:(BOOL)arg1 ;
-(void)_resyncState;
-(id)initWithPassWithUniqueID:(id)arg1 ;
-(void)setRequestServiceMode:(BOOL)arg1 ;
-(BOOL)requestServiceMode;
-(BOOL)disableCardSelection;
@end

