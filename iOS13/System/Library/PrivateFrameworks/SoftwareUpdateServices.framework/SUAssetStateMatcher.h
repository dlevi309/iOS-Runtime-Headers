/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUAssetMatcher.h>

@class NSString, NSDictionary;

@interface SUAssetStateMatcher : NSObject <SUAssetMatcher> {

	NSString* _assetType;
	int _interestedStates;
	NSDictionary* _matcherInfo;

}

@property (nonatomic,readonly) NSString * assetType;                    //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) int interestedStates;                    //@synthesize interestedStates=_interestedStates - In the implementation block
@property (nonatomic,readonly) NSDictionary * matcherInfo;              //@synthesize matcherInfo=_matcherInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)interestedStates;
-(NSString *)assetType;
-(BOOL)_matchesFilterType:(id)arg1 ;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(void)_modifyMADownloadOptions:(id)arg1 ;
-(id)findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(void)modifyMADownloadOptions:(id)arg1 ;
-(NSDictionary *)matcherInfo;
-(id)initWithType:(id)arg1 interestedStates:(int)arg2 ;
@end

