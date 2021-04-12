/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol> {

	atomic<bool> _started;
	atomic<bool> _canceled;
	/*^block*/id _cancelBlock;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id cancelBlock;                        //@synthesize cancelBlock=_cancelBlock - In the implementation block
-(BOOL)isCanceled;
-(int)run;
-(id)init;
-(float)resourceRequirement;
-(id)completionHandler;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(BOOL)run:(id*)arg1 ;
-(void)cancel;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

