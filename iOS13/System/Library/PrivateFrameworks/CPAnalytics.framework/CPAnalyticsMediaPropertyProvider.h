/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/

#import <CPAnalytics/CPAnalyticsDynamicPropertyProvider.h>

@class NSString;

@interface CPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)registerAndProvideMediaPropertiesFor:(id)arg1 ;
-(id)_PHAssetFromPayload:(id)arg1 ;
-(id)_mediaProperty:(id)arg1 forAsset:(id)arg2 ;
-(id)_descriptionForMediaAge:(double)arg1 ;
@end

