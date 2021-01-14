/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINotificationToken.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TRINotificationCallback : NSObject <TRINotificationToken> {

	unsigned long long _id;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long id;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)id;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

