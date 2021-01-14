/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperation:(UIPDFPageRenderOperation *)arg1 ;
-(UIPDFPageRenderOperation *)operation;
-(CGSize)size;
-(UIImage *)image;
-(unsigned long long)pageIndex;
-(void)sendImage;
-(BOOL)hasPage;
-(void)cancel;
-(long long)priority;
-(void)cancelOperation;
-(void)dealloc;
-(id)initWithPage:(id)arg1 maxSize:(CGSize)arg2 queuePriority:(long long)arg3 ;
-(void)cancelOperationForTarget:(id)arg1 ;
-(void)setTarget:(id)arg1 callback:(SEL)arg2 userData:(id)arg3 ;
-(void)releaseOperation;
-(void)renderImage;
-(void)sendImageTo:(id)arg1 callback:(SEL)arg2 userData:(id)arg3 ;
-(BOOL)releaseWhenDone;
-(void)setReleaseWhenDone:(BOOL)arg1 ;
@end

