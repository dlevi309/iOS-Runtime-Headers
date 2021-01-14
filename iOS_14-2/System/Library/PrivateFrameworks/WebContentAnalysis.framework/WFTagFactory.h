/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

