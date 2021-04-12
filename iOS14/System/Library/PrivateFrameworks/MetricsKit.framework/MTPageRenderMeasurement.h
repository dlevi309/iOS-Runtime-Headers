/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTPerfBaseMeasurement.h>
#import <libobjc.A.dylib/MTPageRenderMeasurementData.h>

@class NSString, NSArray;

@interface MTPageRenderMeasurement : MTPerfBaseMeasurement <MTPageRenderMeasurementData> {

	NSString* _pageId;
	NSString* _pageType;
	NSString* _pageContext;

}

@property (nonatomic,copy,readonly) NSString * pageId; 
@property (nonatomic,copy,readonly) NSString * pageType; 
@property (nonatomic,copy,readonly) NSString * pageContext; 
@property (nonatomic,copy,readonly) NSArray * eventData; 
@property (nonatomic,copy,readonly) NSArray * additionalFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * pageId;                                //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * pageType;                              //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,copy) NSString * pageContext;                           //@synthesize pageContext=_pageContext - In the implementation block
-(NSString *)pageId;
-(NSString *)pageType;
-(NSString *)pageContext;
-(void)setPageContext:(NSString *)arg1 ;
-(void)setPageType:(NSString *)arg1 ;
-(void)setPageId:(NSString *)arg1 ;
-(void)setAppLaunch:(BOOL)arg1 ;
-(void)setXpSamplingForced:(BOOL)arg1 ;
-(void)setXpSessionDuration:(unsigned long long)arg1 ;
-(void)mark:(id)arg1 ;
-(void)setXpSamplingPercentageUsers:(double)arg1 ;
-(void)setLaunchCorrelationKey:(id)arg1 ;
-(void)mark:(id)arg1 time:(long long)arg2 ;
-(void)mark:(id)arg1 date:(id)arg2 ;
-(id)initWithMeasurementTransformer:(id)arg1 pageId:(id)arg2 pageType:(id)arg3 pageContext:(id)arg4 eventData:(id)arg5 ;
-(void)setPrimaryDataResponseCached:(BOOL)arg1 ;
-(void)setPreloadStatus:(id)arg1 ;
@end

