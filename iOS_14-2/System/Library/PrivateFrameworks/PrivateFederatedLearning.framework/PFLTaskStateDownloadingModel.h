/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSData, NSURLSessionDownloadTask;

@interface PFLTaskStateDownloadingModel : NSObject <PFLTaskState> {

	NSData* _resumeData;
	NSURLSessionDownloadTask* _downloadTask;

}

@property (nonatomic,retain) NSData * resumeData;                                  //@synthesize resumeData=_resumeData - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * downloadTask;              //@synthesize downloadTask=_downloadTask - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)suspend;
-(id)init;
-(NSData *)resumeData;
-(void)setResumeData:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)tag;
-(id)initWithCoder:(id)arg1 ;
-(void)setDownloadTask:(NSURLSessionDownloadTask *)arg1 ;
-(NSURLSessionDownloadTask *)downloadTask;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

