/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class NSOperationQueue, UIImage, NSError, NSURL;

@interface QLThumbnailCreationOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	NSOperationQueue* _operationQueue;
	BOOL _generateIfNeeded;
	UIImage* _image;
	NSError* _error;
	NSURL* _documentURL;
	double _maximumDimension;
	double _scaleFactor;
	unsigned long long _useMode;
	CGRect _contentRect;

}

@property (assign) CGRect contentRect;                      //@synthesize contentRect=_contentRect - In the implementation block
@property (retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (retain) NSURL * documentURL;                     //@synthesize documentURL=_documentURL - In the implementation block
@property (assign) double maximumDimension;                 //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (assign) double scaleFactor;                      //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) unsigned long long useMode;              //@synthesize useMode=_useMode - In the implementation block
@property (assign) BOOL generateIfNeeded;                   //@synthesize generateIfNeeded=_generateIfNeeded - In the implementation block
-(void)setScaleFactor:(double)arg1 ;
-(double)scaleFactor;
-(BOOL)_finishIfCancelled;
-(void)setImage:(UIImage *)arg1 ;
-(CGRect)contentRect;
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(UIImage *)image;
-(NSURL *)documentURL;
-(NSError *)error;
-(void)setExecuting:(BOOL)arg1 ;
-(unsigned long long)useMode;
-(void)setFinished:(BOOL)arg1 ;
-(void)main;
-(void)setContentRect:(CGRect)arg1 ;
-(void)retrieveThumbnailForTaggedLogicalURL:(id)arg1 ;
-(void)updateLastHitDateOfAddition:(id)arg1 onPhysicalURL:(id)arg2 ;
-(void)setMaximumDimension:(double)arg1 ;
-(void)setUseMode:(unsigned long long)arg1 ;
-(BOOL)generateIfNeeded;
-(BOOL)isExecuting;
-(double)maximumDimension;
-(void)setGenerateIfNeeded:(BOOL)arg1 ;
-(void)_finish;
-(BOOL)isConcurrent;
-(void)setDocumentURL:(NSURL *)arg1 ;
@end

