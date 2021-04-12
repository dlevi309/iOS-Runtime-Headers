/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

@class NSString, NSDictionary;


@protocol SUAssetMatcher <NSObject>
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) NSDictionary * matcherInfo; 
@required
-(NSString *)assetType;
-(id)findMatchFromCandidates:(id)arg1 error:(id*)arg2;
-(void)modifyMADownloadOptions:(id)arg1;
-(NSDictionary *)matcherInfo;

@end

