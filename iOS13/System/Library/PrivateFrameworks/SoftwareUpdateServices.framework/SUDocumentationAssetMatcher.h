/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUAssetStateMatcher.h>

@class MAAsset;

@interface SUDocumentationAssetMatcher : SUAssetStateMatcher {

	MAAsset* _suAsset;

}
+(id)matcherForInstalledDocumentationFromAsset:(id)arg1 ;
+(id)matcherDocumentationFromAsset:(id)arg1 ;
-(void)dealloc;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(void)_modifyMADownloadOptions:(id)arg1 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 limitingToStates:(int)arg2 ;
-(id)initWithSoftwareUpdateAsset:(id)arg1 ;
-(id)_sortedMatcherPredicatesFromSoftwareUpdateAsset:(id)arg1 ;
-(id)_queryPredicateForProperties:(id)arg1 ;
@end

