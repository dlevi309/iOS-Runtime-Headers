/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SCROConnection : NSObject <NSSecureCoding> {

	unsigned _pingPort;
	CFRunLoopSourceRef _pingSource;
	CFRunLoopSourceRef _invalidationSource;
	unsigned _identifier;
	int _handlerType;
	id _delegate;
	AB _isConnectionStarted;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)_createConnectionRunLoop;
+(void)_configServer;
+(void)_configServerWithMachServiceName:(char*)arg1 ;
+(void)_unconfigServerAndRetry:(BOOL)arg1 ;
+(BOOL)_inUnitTests;
+(void)_addConnectionToRunLoop:(id)arg1 ;
-(void)_startConnection;
-(void)_ping;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(int)sendEvent:(id)arg1 ;
-(void)_stopConnection;
-(id)handlerValueForKey:(int)arg1 ;
-(id)initWithHandlerType:(int)arg1 delegate:(id)arg2 ;
-(int)registerHandlerCallbackForKey:(int)arg1 ;
-(int)setHandlerValue:(id)arg1 forKey:(int)arg2 ;
-(id)handlerArrayValueForKey:(int)arg1 ;
-(int)performHandlerActionForKey:(int)arg1 ;
-(id)handlerValueForKey:(int)arg1 withObject:(id)arg2 ;
@end

