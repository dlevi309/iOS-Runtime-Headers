/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)beginListening;
+(id)serviceQueue;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

