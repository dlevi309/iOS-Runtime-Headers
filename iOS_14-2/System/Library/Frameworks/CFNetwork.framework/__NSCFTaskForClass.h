/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol __NSURLSessionTaskGroupForConfiguration;
@class NSURLRequest, NSUUID, NSURL, NSData, NSString;

@interface __NSCFTaskForClass : NSObject {

	Class cl;
	NSURLRequest* request;
	NSUUID* uniqueIdentifier;
	NSURL* uploadFile;
	NSData* bodyData;
	/*^block*/id completion;
	NSString* downloadFilePath;
	NSData* resumeData;
	/*^block*/id downloadCompletion;
	id<__NSURLSessionTaskGroupForConfiguration> _group;

}
-(void)dealloc;
@end

