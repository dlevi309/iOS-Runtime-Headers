/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class NSString;


@protocol MPRTCReportingItemSessionCreating <NSObject>
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
@required
-(NSString *)rtcReportingServiceIdentifier;
-(id)rtcReportingParentHierarchyToken;
-(long long)rtcReportingAssetType;

@end

