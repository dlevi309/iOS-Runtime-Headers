/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class _PASLock, NSString;

@interface SGPortraitRequestServerDelegate : NSObject <NSXPCListenerDelegate> {

	/*^block*/id _makeHandler;
	_PASLock* _handlerCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithMakeHandler:(/*^block*/id)arg1 ;
@end

