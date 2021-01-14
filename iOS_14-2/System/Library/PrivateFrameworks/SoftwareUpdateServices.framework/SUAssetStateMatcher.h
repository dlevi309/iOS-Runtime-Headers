/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)assetType;
-(int)interestedStates;
-(BOOL)_matchesFilterType:(id)arg1 ;
-(id)_findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(void)_modifyMADownloadOptions:(id)arg1 ;
-(id)findMatchFromCandidates:(id)arg1 error:(id*)arg2 ;
-(void)modifyMADownloadOptions:(id)arg1 ;
-(NSDictionary *)matcherInfo;
-(id)initWithType:(id)arg1 interestedStates:(int)arg2 ;
@end

