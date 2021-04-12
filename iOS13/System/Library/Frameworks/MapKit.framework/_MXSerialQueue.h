/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface _MXSerialQueue : NSObject {

	NSObject*<OS_dispatch_group> _previousTaskGroup;

}
+(id)taskQueue;
+(id)taskInsertionQueue;
+(id)taskCompletionQueue;
-(id)init;
-(void)addTask:(/*^block*/id)arg1 ;
@end

