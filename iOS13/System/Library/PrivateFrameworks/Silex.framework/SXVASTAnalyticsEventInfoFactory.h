/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVASTAnalyticsEventInfoFactory.h>

@protocol SXVASTAnalyticsEventInfoFactory <NSObject>
@required
-(id)createAnalyticsEventInfo;
-(id)createAnalyticsEventInfoWithMetadata:(id)arg1;
-(id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2;

@end


@protocol SVVisibilityMonitoring, SVVolumeProviding;
@class NSString;

@interface SXVASTAnalyticsEventInfoFactory : NSObject <SXVASTAnalyticsEventInfoFactory> {

	id<SVVisibilityMonitoring> _visibilityMonitor;
	id<SVVolumeProviding> _volumeProvider;

}

@property (nonatomic,readonly) id<SVVisibilityMonitoring> visibilityMonitor;              //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (nonatomic,readonly) id<SVVolumeProviding> volumeProvider;                      //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVisibilityMonitoring>)visibilityMonitor;
-(id<SVVolumeProviding>)volumeProvider;
-(id)createAnalyticsEventInfo;
-(id)createAnalyticsEventInfoWithMetadata:(id)arg1 ;
-(id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2 ;
-(id)initWithVisibilityMonitor:(id)arg1 volumeProvider:(id)arg2 ;
@end

