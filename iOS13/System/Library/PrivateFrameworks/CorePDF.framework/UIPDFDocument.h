/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


@protocol NSObjectUIPDFDocumentDelegate;
#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFPageImageCache;

@interface UIPDFDocument : NSObject {

	CGPDFDocumentRef _cgDocument;
	unsigned long long _numberOfPages;
	double _cachedWidth;
	double _cachedHeight;
	NSString* _documentID;
	NSString* _documentName;
	UIPDFPageImageCache* _pageImageCache;
	unsigned long long _imageCacheCount;
	unsigned long long _imageCacheLookAhead;
	double _imageCacheResolution;
	os_unfair_lock_s _lock;
	os_unfair_lock_s _imageCacheLock;
	UIPDFPageImageCache* _thumbnailCache;
	os_unfair_lock_s _thumbnailLock;
	id<NSObject><UIPDFDocumentDelegate> _delegate;

}

@property (readonly) unsigned long long numberOfPages; 
@property (retain) UIPDFPageImageCache * pageImageCache; 
@property (retain) UIPDFPageImageCache * thumbnailCache; 
@property (readonly) CGPDFDocumentRef CGDocument;                                       //@synthesize cgDocument=_cgDocument - In the implementation block
@property (assign,nonatomic) id<NSObject><UIPDFDocumentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * documentID; 
+(id)documentNamed:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id<NSObject><UIPDFDocumentDelegate>)delegate;
-(void)setDelegate:(id<NSObject><UIPDFDocumentDelegate>)arg1 ;
-(double)maxWidth;
-(double)maxHeight;
-(unsigned long long)numberOfPages;
-(id)pageAtIndex:(unsigned long long)arg1 ;
-(id)initWithCGPDFDocument:(CGPDFDocumentRef)arg1 ;
-(NSString *)documentID;
-(BOOL)allowsCopying;
-(UIPDFPageImageCache *)pageImageCache;
-(void)setImageCacheCount:(unsigned long long)arg1 lookAhead:(unsigned long long)arg2 withResolution:(double)arg3 ;
-(id)copyPageAtIndex:(unsigned long long)arg1 ;
-(CGPDFDocumentRef)copyCGPDFDocument;
-(id)initWithCGPDFDocumentLimitedMemory:(CGPDFDocumentRef)arg1 ;
-(void)purgePagesBefore:(unsigned long long)arg1 ;
-(BOOL)copyDocumentTo:(id)arg1 ;
-(CGPDFDocumentRef)CGDocument;
-(void)updateWidthHeightCache;
-(double)sumWidth;
-(double)sumHeight;
-(void)setPageImageCache:(UIPDFPageImageCache *)arg1 ;
-(UIPDFPageImageCache *)thumbnailCache;
-(void)setThumbnailCache:(UIPDFPageImageCache *)arg1 ;
@end

