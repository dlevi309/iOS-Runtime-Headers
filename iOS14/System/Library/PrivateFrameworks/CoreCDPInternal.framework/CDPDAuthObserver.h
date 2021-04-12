/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)registerListener:(id)arg1 ;
-(id)init;
-(void)eventReceived:(const char*)arg1 eventInfo:(id)arg2 ;
@end

