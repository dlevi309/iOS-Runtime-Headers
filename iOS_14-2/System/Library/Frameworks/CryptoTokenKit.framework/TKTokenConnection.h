/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMapTable *)sessions;
-(void)setInitialKeepAlive:(id)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)invalidate;
-(id)initialKeepAlive;
-(TKToken *)token;
-(id)initWithToken:(id)arg1 ;
-(void)dealloc;
@end

