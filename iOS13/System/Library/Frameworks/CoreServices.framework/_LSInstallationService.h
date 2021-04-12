/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _LSInstallationService : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceQueue;
+(void)beginListening;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(NSObject*<OS_dispatch_queue>)serialQueue;
@end

