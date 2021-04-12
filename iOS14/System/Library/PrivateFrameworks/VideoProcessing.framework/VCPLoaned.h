/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class VCPObjectPool;

@interface VCPLoaned : NSObject {

	id _object;
	VCPObjectPool* _pool;

}

@property (nonatomic,readonly) id object;              //@synthesize object=_object - In the implementation block
-(id)initWithObject:(id)arg1 fromPool:(id)arg2 ;
-(id)object;
-(void)dealloc;
@end

