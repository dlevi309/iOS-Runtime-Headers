/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class NSMutableArray;

@interface VCPObjectPool : NSObject {

	/*^block*/id _allocator;
	NSMutableArray* _objects;

}
+(id)objectPoolWithAllocator:(/*^block*/id)arg1 ;
-(id)getObject;
-(void)returnObject:(id)arg1 ;
-(id)initWithAllocator:(/*^block*/id)arg1 ;
@end

