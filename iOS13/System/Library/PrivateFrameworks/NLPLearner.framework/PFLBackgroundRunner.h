/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/

#import <libobjc.A.dylib/_DASExtensionRunner.h>

@class _DASActivity, QuickTypePFLBackgroundTask, BKSProcessAssertion, NSString;

@interface PFLBackgroundRunner : NSObject <_DASExtensionRunner> {

	_DASActivity* _activity;
	QuickTypePFLBackgroundTask* _task;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) QuickTypePFLBackgroundTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * assertion;                //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) _DASActivity * activity;                      //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)stop;
-(unsigned char)start;
-(_DASActivity *)activity;
-(void)cleanup;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(QuickTypePFLBackgroundTask *)task;
-(void)setTask:(QuickTypePFLBackgroundTask *)arg1 ;
-(BOOL)prepareForActivity:(id)arg1 ;
@end

