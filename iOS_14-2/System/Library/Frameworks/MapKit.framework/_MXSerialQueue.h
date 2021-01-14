/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addTask:(/*^block*/id)arg1 ;
-(id)init;
@end

