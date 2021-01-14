/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	BOOL executing;
	BOOL finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(void)completeOperation;
-(void)start;
-(UIPDFPageRenderJob *)job;
-(BOOL)isFinished;
-(void)main;
-(id)initWithJob:(id)arg1 ;
-(BOOL)isExecuting;
-(void)setJob:(UIPDFPageRenderJob *)arg1 ;
-(BOOL)isConcurrent;
-(void)dealloc;
@end

