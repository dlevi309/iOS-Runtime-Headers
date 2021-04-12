/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation {

	NSURL* _source;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSURL * source;                     //@synthesize source=_source - In the implementation block
-(id)init;
-(void)setSource:(NSURL *)arg1 ;
-(NSURL *)source;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
@end

