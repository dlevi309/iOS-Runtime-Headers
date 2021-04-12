/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class TKToken, NSXPCListener, NSMapTable, NSString;

@interface TKTokenConnection : NSObject <NSXPCListenerDelegate> {

	TKToken* _token;
	NSXPCListener* _listener;
	NSMapTable* _sessions;
	id _initialKeepAlive;

}

@property (nonatomic,readonly) TKToken * token;                       //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSMapTable * sessions;                 //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,retain) id initialKeepAlive;                     //@synthesize initialKeepAlive=_initialKeepAlive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(TKToken *)token;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithToken:(id)arg1 ;
-(NSMapTable *)sessions;
-(void)setInitialKeepAlive:(id)arg1 ;
-(id)initialKeepAlive;
@end

