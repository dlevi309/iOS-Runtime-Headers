/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <libobjc.A.dylib/_RWIRelayToClientMessageProxy.h>

@protocol _RWIRelayClientConnectionDelegate;
@class NSString;

@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {

	BOOL _closed;
	BOOL _sleeping;
	id<_RWIRelayClientConnectionDelegate> _delegate;
	NSString* _tag;

}

@property (nonatomic,readonly) id<_RWIRelayClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * tag;                                                  //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) BOOL sleeping;                                                 //@synthesize sleeping=_sleeping - In the implementation block
-(void)sendMessage:(id)arg1 ;
-(void)setTag:(NSString *)arg1 ;
-(id<_RWIRelayClientConnectionDelegate>)delegate;
-(void)close;
-(NSString *)tag;
-(id)initWithDelegate:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(void)closeInternal;
-(void)_closeAndNotifyDelegate:(BOOL)arg1 ;
-(void)closeFromConnection;
-(void)dispatchRelayMessage:(id)arg1 ;
-(BOOL)sleeping;
-(void)setSleeping:(BOOL)arg1 ;
@end

