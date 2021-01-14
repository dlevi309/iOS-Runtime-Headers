/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSDictionary;

@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSDictionary* _options;
	atomic<bool> _started;
	atomic<bool> _cancel;
	int _taskID;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,copy) id cancelBlock;              //@synthesize cancelBlock=_cancelBlock - In the implementation block
+(id)taskWithOptions:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCanceled;
-(int)run;
-(float)resourceRequirement;
-(id)initWithOptions:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

