/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

