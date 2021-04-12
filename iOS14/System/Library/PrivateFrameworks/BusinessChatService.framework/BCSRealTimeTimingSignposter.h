/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSRealTimeSignposter.h>
#import <libobjc.A.dylib/BCSRealTimeTimingMeasurementHandler.h>

@class NSString;

@interface BCSRealTimeTimingSignposter : BCSRealTimeSignposter <BCSRealTimeTimingMeasurementHandler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)signposterForBCSType:(long long)arg1 ;
+(id)signposterForBCSType:(long long)arg1 signpostIdentifier:(unsigned long long)arg2 ;
+(id)signposterForShardIdentifier:(id)arg1 ;
+(id)signposterForItemIdentifier:(id)arg1 ;
-(void)_handleCloudKitConfigFetch:(long long)arg1 ;
-(void)_handleCloudKitShardFetch:(long long)arg1 ;
-(void)_handleCloudKitItemFetch:(long long)arg1 ;
-(void)_handleCloudKitMegashardFetch:(long long)arg1 ;
-(void)_handleCloudKitConfigFetchAndDecode:(long long)arg1 ;
-(void)_handleCloudKitShardFetchAndDecode:(long long)arg1 ;
-(void)_handleCloudKitItemFetchAndDecode:(long long)arg1 ;
-(void)_handleCloudKitMegashardFetchAndDecode:(long long)arg1 ;
-(void)_handleConfigResolution:(long long)arg1 ;
-(void)_handleShardResolution:(long long)arg1 ;
-(void)_handleItemResolution:(long long)arg1 ;
-(void)_handleItemFetch:(long long)arg1 ;
-(void)_handleBusinessLinkChoppedFetch:(long long)arg1 ;
-(void)_handleBusinessLinkHashFetch:(long long)arg1 ;
-(void)_handleItemIsRegistered:(long long)arg1 ;
-(void)timingMeasurementDidBegin:(id)arg1 ;
-(void)timingMeasurementDidEnd:(id)arg1 ;
@end

