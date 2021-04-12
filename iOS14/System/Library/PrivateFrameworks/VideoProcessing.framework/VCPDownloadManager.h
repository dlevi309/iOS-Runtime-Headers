/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableData, NSString, NSURLSessionDataTask;

@interface VCPDownloadManager : NSObject {

	NSObject*<OS_dispatch_semaphore> _mutex;
	NSMutableData* _buffer;
	NSString* _localIdentifier;
	unsigned long long _length;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSURLSessionDataTask* _dataTask;
	/*^block*/id _cancel;

}

@property (nonatomic,copy) id cancel;              //@synthesize cancel=_cancel - In the implementation block
+(id)sharedManager;
+(void)_reportDownload:(unsigned long long)arg1 ;
+(unsigned long long)maxSizeBytes;
-(void)flush;
-(id)init;
-(id)cancel;
-(id)requestDownloadOfResource:(id)arg1 ;
-(void)setCancel:(id)arg1 ;
@end

