/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)capacity;
-(CAContext *)context;
-(void)setContext:(CAContext *)arg1 ;
-(void)purge;
-(BOOL)renderForTime:(double)arg1 options:(id)arg2 error:(id*)arg3 ;
-(double)cancelAtTime:(double)arg1 ;
-(void)setPurgeable;
-(id)_initWithDisplayId:(unsigned)arg1 width:(unsigned)arg2 height:(unsigned)arg3 capacity:(unsigned long long)arg4 ;
@end

