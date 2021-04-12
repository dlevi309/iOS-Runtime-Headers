/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <libobjc.A.dylib/AEHostStatisticsManager.h>

@class NSString;

@interface AEChatKitStatisticsManager : NSObject <AEHostStatisticsManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportPresentationOfFullScreenCamera;
-(void)reportPresentationOfFullScreenPhotoLibrary;
-(void)reportSelectionOfPhotoGridIndex:(unsigned long long)arg1 ;
-(void)reportPayloadSentFromSource:(long long)arg1 ;
@end

