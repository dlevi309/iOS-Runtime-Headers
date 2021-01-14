/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVASTAnalyticsEventInfoFactory.h>

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
@required
-(id)createAnalyticsEventInfo;
-(id)createAnalyticsEventInfoWithMetadata:(id)arg1;
-(id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2;

@end


@protocol SXVisibilityMonitoring, SXVolumeProviding;
@class NSString;

@interface SXVASTAnalyticsEventInfoFactory : NSObject <SXVASTAnalyticsEventInfoFactory> {

	id<SXVisibilityMonitoring> _visibilityMonitor;
	id<SXVolumeProviding> _volumeProvider;

}

@property (nonatomic,readonly) id<SXVisibilityMonitoring> visibilityMonitor;              //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SXVolumeProviding> volumeProvider;                      //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXVolumeProviding>)volumeProvider;
-(id)initWithVisibilityMonitor:(id)arg1 volumeProvider:(id)arg2 ;
-(id<SXVisibilityMonitoring>)visibilityMonitor;
-(id)createAnalyticsEventInfo;
-(id)createAnalyticsEventInfoWithMetadata:(id)arg1 ;
-(id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2 ;
@end

