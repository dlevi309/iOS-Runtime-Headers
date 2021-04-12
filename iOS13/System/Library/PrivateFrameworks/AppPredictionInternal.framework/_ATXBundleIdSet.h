/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class _PASCFBurstTrie;

@interface _ATXBundleIdSet : NSObject {

	_PASCFBurstTrie* _trie;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)containsBundleId:(id)arg1 ;
-(id)trie;
@end

