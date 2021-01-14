/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue_attr, OS_dispatch_queue;
@class NSObject;

@interface BSDispatchQueueAttributes : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue_attr> _attrs;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue_attr> attributes;              //@synthesize attrs=_attrs - In the implementation block
+(id)concurrent;
+(id)serial;
-(id)inactive;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(id)serviceClass:(unsigned)arg1 ;
-(id)targetQueue:(id)arg1 ;
-(id)serviceClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

