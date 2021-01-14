/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXAsyncIterator.h>

@class NSString;

@interface _PXAsyncIterator : NSObject <PXAsyncIterator> {

	unsigned long long _index;
	unsigned long long _count;
	/*^block*/id _handler;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id handler;                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id completion;                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)next;
-(unsigned long long)index;
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)completion;
-(void)stop;
-(id)initWithCount:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)handler;
-(void)_executeNextRun;
@end

