/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <libobjc.A.dylib/WBSUserDefaultObservation.h>

@protocol WBSUserDefaultObservation <NSObject>
@required
-(void)invalidate;

@end


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSString, NSObject;

@interface WBSUserDefaultObservation : NSObject <WBSUserDefaultObservation> {

	NSUserDefaults* _defaults;
	/*^block*/id _handler;
	NSString* _key;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithUserDefaults:(id)arg1 key:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)invalidate;
-(void)dealloc;
@end

