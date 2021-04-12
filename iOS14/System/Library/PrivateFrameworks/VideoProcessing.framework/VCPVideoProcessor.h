/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSURL, VCPVideoProcessorSession;

@interface VCPVideoProcessor : NSObject {

	NSURL* _url;
	VCPVideoProcessorSession* _session;
	atomic<bool> _canceled;
	/*^block*/id _progressHandler;

}

@property (copy) id progressHandler;              //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)_analyzeWithStart:(SCD_Struct_VC6)arg1 andDuration:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
-(BOOL)analyzeWithStart:(SCD_Struct_VC6)arg1 andDuration:(SCD_Struct_VC6)arg2 error:(id*)arg3 ;
-(BOOL)removeRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)addRequest:(id)arg1 withConfiguration:(id)arg2 error:(id*)arg3 ;
-(id)progressHandler;
-(void)cancel;
@end

