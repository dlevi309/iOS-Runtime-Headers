/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setSource:(NSURL *)arg1 ;
-(VSOptional *)result;
-(NSURL *)source;
@end

