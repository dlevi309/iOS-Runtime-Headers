/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) NSObject*<OS_dispatch_queue_attr> attributes;                   //@synthesize attrs=_attrs - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
+(id)serial;
+(id)_attributesWithAttributes:(id)arg1 ;
+(id)concurrent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(void)setAttributes:(NSObject*<OS_dispatch_queue_attr>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)serviceClass:(unsigned)arg1 relativePriority:(int)arg2 ;
-(id)serviceClass:(unsigned)arg1 ;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(id)targetQueue:(id)arg1 ;
-(id)inactive;
@end

