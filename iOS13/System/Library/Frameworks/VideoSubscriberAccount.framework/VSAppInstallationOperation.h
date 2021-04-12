/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSOptional;

@interface VSAppInstallationOperation : VSAsyncOperation {

	NSString* _buyParams;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * buyParams;               //@synthesize buyParams=_buyParams - In the implementation block
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(void)executionDidBegin;
@end

