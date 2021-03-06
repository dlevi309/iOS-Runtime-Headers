/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/KmlSessionCallbacks.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, DASessionInternal, NSString;

@interface DASession : NSObject <KmlSessionCallbacks, NSSecureCoding> {

	NSXPCConnection* _clientConnection;
	DASessionInternal* _internal;
	BOOL _hasEnded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)endSession;
-(id)initWithDelegate:(id)arg1 ;
-(void)setProxy:(id)arg1 ;
-(void)didEnd:(id)arg1 ;
-(id)getDelegate;
-(id)getRemoteProxy:(/*^block*/id)arg1 ;
-(void)didStart:(BOOL)arg1 ;
-(void)dispatchOnCallbackQueue:(/*^block*/id)arg1 ;
@end

