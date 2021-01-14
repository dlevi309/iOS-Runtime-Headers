/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <libobjc.A.dylib/CHSynchronizable.h>

@protocol CHSynchronizable <NSObject>
@required
-(void)execute:(/*^block*/id)arg1;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1;
-(void)executeSync:(/*^block*/id)arg1;
-(id)queue;
-(id)executeSyncWithResult:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CHSynchronizable : NSObject <CHSynchronizable> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)execute:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 ;
-(void)executeSync:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
@end

