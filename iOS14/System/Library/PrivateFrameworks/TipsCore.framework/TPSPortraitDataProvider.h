/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class PPTopicStore;

@interface TPSPortraitDataProvider : NSObject {

	PPTopicStore* _store;

}
-(id)init;
-(id)_initWithStore:(id)arg1 ;
-(BOOL)matchesTopics:(id)arg1 confidenceThreshold:(double)arg2 ;
@end

