/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSData;

@interface VCPHomeFaceIdentificationTask : NSObject <VCPMADTaskProtocol> {

	/*^block*/id _completionHandler;
	NSData* _faceCropData;
	atomic<bool> _started;
	atomic<bool> _cancel;

}
+(id)taskWithFaceCrop:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(int)run;
-(float)resourceRequirement;
-(void)configureRequest:(id)arg1 withRevision:(unsigned long long)arg2 ;
-(BOOL)run:(id*)arg1 ;
-(id)initWithFaceCrop:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

