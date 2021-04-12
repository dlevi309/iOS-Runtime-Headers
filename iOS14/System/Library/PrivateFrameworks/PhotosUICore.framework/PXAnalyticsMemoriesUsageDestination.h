/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/CPAnalyticsDestinationProtocol.h>

@protocol PXDisplayAssetCollection;
@class NSString;

@interface PXAnalyticsMemoriesUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {

	long long _defaultNavigationKind;
	long long _currentURLNavigationKind;
	long long _sessionInitialNavigationKind;
	id<PXDisplayAssetCollection> _lastAppearedAssetCollection;
	long long _lastAppearedAssetCollectionNavigationKind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forYouTabOpenedAppEventNameWithNavigationKind:(long long)arg1 ;
+(id)forYouTabOpenedEventName;
+(id)memoryPlayedAppEventNameWithNavigationKind:(long long)arg1 ;
+(id)memoryPlayedEventName;
+(id)memoryOpenedAppEventNameWithNavigationKind:(long long)arg1 ;
+(id)memoryOpenedEventName;
+(id)payloadSessionStartTypeKey;
+(id)payloadLaunchTypeKey;
-(void)processEvent:(id)arg1 ;
-(id)init;
@end

