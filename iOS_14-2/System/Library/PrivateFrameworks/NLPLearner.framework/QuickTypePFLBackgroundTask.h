/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)activityForScheduling;
@end

