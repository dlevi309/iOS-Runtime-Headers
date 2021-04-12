/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPage, UIImage, UIPDFPageRenderOperation;

@interface UIPDFPageRenderJob : NSObject {

	UIPDFPage* _page;
	unsigned long long _pageIndex;
	CGSize _size;
	long long _priority;
	UIImage* _image;
	UIPDFPageRenderOperation* _operation;
	id _target;
	SEL _callback;
	id _userData;
	BOOL _sendPending;
	BOOL _releaseWhenDone;
	os_unfair_lock_s _lock;

}

@property (retain,readonly) UIImage * image; 
@property (assign) UIPDFPageRenderOperation * operation; 
@property (readonly) unsigned long long pageIndex;                    //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) long long priority;                              //@synthesize priority=_priority - In the implementation block
@property (assign) BOOL releaseWhenDone;                              //@synthesize releaseWhenDone=_releaseWhenDone - In the implementation block
@property (readonly) CGSize size;                                     //@synthesize size=_size - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(void)cancel;
-(UIPDFPageRenderOperation *)operation;
-(void)setOperation:(UIPDFPageRenderOperation *)arg1 ;
-(long long)priority;
-(UIImage *)image;
-(void)cancelOperation;
-(unsigned long long)pageIndex;
-(BOOL)hasPage;
-(id)initWithPage:(id)arg1 maxSize:(CGSize)arg2 queuePriority:(long long)arg3 ;
-(void)cancelOperationForTarget:(id)arg1 ;
-(void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3 ;
-(void)releaseOperation;
-(void)renderImage;
-(void)sendImage;
-(void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3 ;
-(BOOL)releaseWhenDone;
-(void)setReleaseWhenDone:(BOOL)arg1 ;
@end

