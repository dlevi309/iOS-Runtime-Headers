/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


@class CAContext;

@interface CADisplayFlipBook : NSObject {

	void* _impl;

}

@property (nonatomic,retain) CAContext * context; 
@property (nonatomic,readonly) unsigned long long capacity; 
+(id)new;
-(id)init;
-(unsigned long long)capacity;
-(CAContext *)context;
-(id)description;
-(id)_initWithDisplayId:(unsigned)arg1 width:(unsigned)arg2 height:(unsigned)arg3 capacity:(unsigned long long)arg4 ;
-(double)cancelAtTime:(double)arg1 ;
-(void)setPurgeable;
-(BOOL)renderForTime:(double)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)purge;
-(void)dealloc;
-(void)setContext:(CAContext *)arg1 ;
@end

