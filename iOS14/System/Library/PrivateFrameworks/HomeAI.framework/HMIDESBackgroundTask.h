/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <CoreML/MLBackgroundTask.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSURL, NSString;

@interface HMIDESBackgroundTask : MLBackgroundTask <HMFLogging> {

	NSURL* _url;

}

@property (readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithCoder:(id)arg1 ;
-(id)activityForScheduling;
@end

