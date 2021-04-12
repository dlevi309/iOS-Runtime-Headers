/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSQLCore;

@interface _NSSQLCoreConnectionObsever : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	NSSQLCore* _core;

}
-(void)dealloc;
-(id)initWithSQLCore:(id)arg1 ;
-(void)_clearBinding;
-(void)_postRemoteChangeNotificationWithTransactionID:(unsigned long long)arg1 ;
-(id)_retainedBinding;
-(void)_purgeCaches:(id)arg1 ;
@end

