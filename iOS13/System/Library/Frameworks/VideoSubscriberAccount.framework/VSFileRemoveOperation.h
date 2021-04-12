/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)executionDidBegin;
@end

