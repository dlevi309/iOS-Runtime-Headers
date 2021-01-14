/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/RBSProcessStringPredicate.h>

@class NSString;

@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {

	NSString* _beforeTranslocationBundlePath;
	os_unfair_lock_s _lock;

}
-(BOOL)matchesProcess:(id)arg1 ;
-(id)init;
-(id)beforeTranslocationBundlePath;
-(id)initWithIdentifier:(id)arg1 ;
@end

