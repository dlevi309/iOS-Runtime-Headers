/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol RMSTouchRemoteSocketDelegate;
@class NSOutputStream, NSString;

@interface RMSTouchRemoteSocket : NSObject <NSStreamDelegate> {

	NSOutputStream* _outputStream;
	NSString* _host;
	unsigned _port;
	unsigned _encryptionKey;
	id<RMSTouchRemoteSocketDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSTouchRemoteSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<RMSTouchRemoteSocketDelegate>)delegate;
-(void)setDelegate:(id<RMSTouchRemoteSocketDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)disconnect;
-(void)connect;
-(id)_encryptData:(id)arg1 ;
-(id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3 ;
-(BOOL)sendTouchCode:(long long)arg1 timeInMilliseconds:(unsigned)arg2 location:(CGPoint)arg3 ;
@end

