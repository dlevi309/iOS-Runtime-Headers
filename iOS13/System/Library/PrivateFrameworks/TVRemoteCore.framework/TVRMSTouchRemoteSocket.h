/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol TVRMSTouchRemoteSocketDelegate;
@class NSOutputStream, NSString;

@interface TVRMSTouchRemoteSocket : NSObject <NSStreamDelegate> {

	NSOutputStream* _outputStream;
	NSString* _host;
	unsigned _port;
	unsigned _encryptionKey;
	id<TVRMSTouchRemoteSocketDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRMSTouchRemoteSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<TVRMSTouchRemoteSocketDelegate>)delegate;
-(void)setDelegate:(id<TVRMSTouchRemoteSocketDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)disconnect;
-(void)connect;
-(id)_encryptData:(id)arg1 ;
-(id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3 ;
-(BOOL)sendTouchCode:(long long)arg1 timeInMilliseconds:(unsigned)arg2 location:(CGPoint)arg3 ;
@end

