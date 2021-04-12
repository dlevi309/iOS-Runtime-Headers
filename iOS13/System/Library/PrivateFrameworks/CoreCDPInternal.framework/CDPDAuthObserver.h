/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDXPCEventListener.h>

@class NSMutableArray, NSString;

@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener> {

	NSMutableArray* _authListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)registerListener:(id)arg1 ;
-(void)eventReceived:(const char*)arg1 eventInfo:(id)arg2 ;
@end

