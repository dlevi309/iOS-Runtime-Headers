/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSError;

@interface VSFileRemoveOperation : VSAsyncOperation {

	NSURL* _fileURL;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(void)executionDidBegin;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSURL *)fileURL;
@end

