/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {

	UIPDFDocument* _document;
	unsigned long long _lookAhead;
	double _lookAheadResolution;
	unsigned long long _jobCount;
	id* _jobsPrioritized;
	unsigned long long _nextJobIndex;
	unsigned long long _pageCount;
	id* _jobsByPage;
	NSOperationQueue* _renderQueue;
	os_unfair_lock_s _lock;
	int jobsComplete;

}

@property (readonly) UIPDFDocument * document;                  //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long pageCount;              //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) unsigned long long lookAhead;              //@synthesize lookAhead=_lookAhead - In the implementation block
@property (readonly) double lookAheadResolution;                //@synthesize lookAheadResolution=_lookAheadResolution - In the implementation block
-(unsigned long long)pageCount;
-(id)initWithDocument:(id)arg1 ;
-(void)clearCache;
-(UIPDFDocument *)document;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)lookAhead;
-(int)getRenderQueueJobsCount;
-(id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3 withLookAheadResolution:(double)arg4 ;
-(id)getImageIfAvailableForPage:(unsigned long long)arg1 ;
-(void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 quality:(BOOL*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6 ;
-(void)addRenderJob:(id)arg1 ;
-(void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 ;
-(void)cancelPendingRenderOperations;
-(void)cancelPendingRenderOperationsForTarget:(id)arg1 ;
-(double)lookAheadResolution;
@end

