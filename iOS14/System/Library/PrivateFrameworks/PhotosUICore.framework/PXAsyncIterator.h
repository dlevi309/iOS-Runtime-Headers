/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXAsyncIterator <NSObject>
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) unsigned long long count; 
@required
-(void)next;
-(unsigned long long)index;
-(unsigned long long)count;
-(void)stop;

@end

