/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ANAnnouncementStatePublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	char* _name;
	int _registrationToken;

}
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(void)_register;
-(void)_unregister;
-(BOOL)_setState:(unsigned long long)arg1 withToken:(int)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(void)publishAnnouncePlaybackState:(unsigned long long)arg1 ;
@end

