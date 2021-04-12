/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUNotifyObserver.h>

@protocol TUNotifyObserver <NSObject>
@property (nonatomic,copy) id callback; 
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isObserving,nonatomic,readonly) BOOL observing; 
@required
-(id)callback;
-(void)setCallback:(/*^block*/id)arg1;
-(void)beginObserving;
-(BOOL)isObserving;
-(void)endObserving;
-(unsigned long long)state;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TUNotifyObserver : NSObject <TUNotifyObserver> {

	int _token;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _notificationName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * notificationName;                        //@synthesize notificationName=_notificationName - In the implementation block
@property (assign,nonatomic) int token;                                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id callback;                                        //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isObserving,nonatomic,readonly) BOOL observing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)beginObserving;
-(BOOL)isObserving;
-(void)endObserving;
-(void)setNotificationName:(NSString *)arg1 ;
-(void)setToken:(int)arg1 ;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_endObserving;
-(id)initWithNotificationName:(id)arg1 queue:(id)arg2 ;
-(int)token;
-(NSString *)notificationName;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

