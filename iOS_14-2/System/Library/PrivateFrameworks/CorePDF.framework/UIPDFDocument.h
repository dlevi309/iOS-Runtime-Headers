/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(id<NSObject><UIPDFDocumentDelegate>)delegate;
-(double)maxWidth;
-(UIPDFPageImageCache *)thumbnailCache;
-(void)setThumbnailCache:(UIPDFPageImageCache *)arg1 ;
-(void)setDelegate:(id<NSObject><UIPDFDocumentDelegate>)arg1 ;
-(NSString *)documentID;
-(unsigned long long)numberOfPages;
-(double)maxHeight;
-(id)pageAtIndex:(unsigned long long)arg1 ;
-(id)initWithCGPDFDocument:(CGPDFDocumentRef)arg1 ;
-(void)dealloc;
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
@end

