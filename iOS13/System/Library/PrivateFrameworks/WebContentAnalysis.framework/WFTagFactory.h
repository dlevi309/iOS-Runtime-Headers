/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSMutableDictionary;

@interface WFTagFactory : NSObject {

	NSMutableDictionary* sharedTags;

}
+(id)defaultFactory;
+(id)tagsForWebpage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tagWithClass:(Class)arg1 webpage:(id)arg2 ;
@end

