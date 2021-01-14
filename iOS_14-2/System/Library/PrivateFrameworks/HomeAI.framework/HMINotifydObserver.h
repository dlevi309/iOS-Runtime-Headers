/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMINotifydObserver : HMFObject <HMFLogging> {

	int _token;
	const char* _notificationName;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                     //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) int token;                                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) const char* notificationName;                    //@synthesize notificationName=_notificationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)callback;
-(BOOL)start;
-(void)setToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(const char*)notificationName;
-(void)dealloc;
-(id)initWithNotificationName:(const char*)arg1 andQueue:(id)arg2 andCallback:(/*^block*/id)arg3 ;
-(void)publishValueForToken:(int)arg1 ;
-(void)publishInitialValue;
@end

