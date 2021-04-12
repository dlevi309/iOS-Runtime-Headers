/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/

#import <CoreML/MLBackgroundTask.h>

@class NSURL;

@interface QuickTypePFLBackgroundTask : MLBackgroundTask {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)activityForScheduling;
@end

