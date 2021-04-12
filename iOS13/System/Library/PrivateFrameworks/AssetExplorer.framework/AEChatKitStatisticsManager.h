/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

