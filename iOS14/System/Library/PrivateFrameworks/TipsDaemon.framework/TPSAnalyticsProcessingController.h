/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <libobjc.A.dylib/TPSAnalyticsProcessorDataSource.h>

@class NSArray, NSDictionary, TPSExperiment;

@interface TPSAnalyticsProcessingController : NSObject <TPSAnalyticsProcessorDataSource> {

	NSArray* _processors;
	NSArray* _allTipStatus;
	NSDictionary* _contextualInfoMap;
	NSDictionary* _eventHistoryMap;
	TPSExperiment* _experiment;

}
-(id)experiment;
-(void)processAnalytics;
-(id)initWithAllTipStatus:(id)arg1 contextualInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4 processors:(id)arg5 ;
-(id)allTipStatus;
-(id)initWithAllTipStatus:(id)arg1 contextualInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4 ;
-(void)resetAnalytics;
-(id)contextualEventForIdentifier:(id)arg1 ;
-(id)allContextualInfo;
-(id)contextualInfoForIdentifier:(id)arg1 ;
@end

