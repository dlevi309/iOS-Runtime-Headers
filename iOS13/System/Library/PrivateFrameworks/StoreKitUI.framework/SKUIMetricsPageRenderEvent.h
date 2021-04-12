/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSMetricsBaseEvent.h>
#import <libobjc.A.dylib/SKUIInspectableObject.h>

@class NSMutableArray, NSDictionary, NSString, NSArray;

@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject> {

	NSMutableArray* _domChanges;
	NSMutableArray* _requests;
	NSDictionary* _metricsBase;

}

@property (nonatomic,retain) NSString * clientCorrelationKey; 
@property (nonatomic,retain) NSString * launchCorrelationKey; 
@property (assign,nonatomic) double pageRequestedTime; 
@property (assign,nonatomic) double pageAppearTime; 
@property (assign,nonatomic) double pageDisappearTime; 
@property (assign,nonatomic) double platformRequestStartTime; 
@property (assign,nonatomic) double platformResponseStartTime; 
@property (assign,nonatomic) double platformResponseEndTime; 
@property (assign,nonatomic) BOOL platformResponseWasCached; 
@property (assign,nonatomic) double platformJsonParseStartTime; 
@property (assign,nonatomic) double platformJsonParseEndTime; 
@property (nonatomic,copy,readonly) NSArray * domChanges;                                                        //@synthesize domChanges=_domChanges - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests;                                                          //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) double resourceRequestStartTime; 
@property (assign,nonatomic) double resourceRequestOnScreenEndTime; 
@property (assign,nonatomic) double resourceRequestEndTime; 
@property (assign,nonatomic) double pageUserReadyTime; 
@property (assign,setter=setXPSessionDuration:,nonatomic) double xpSessionDuration; 
@property (assign,setter=setXPSamplingForced:,nonatomic) BOOL xpSamplingForced; 
@property (assign,setter=setXPSamplingPercentageUsers:,nonatomic) double xpSamplingPercentageUsers; 
@property (nonatomic,copy) NSDictionary * metricsBase;                                                           //@synthesize metricsBase=_metricsBase - In the implementation block
@property (getter=isReadyForSubmission,nonatomic,readonly) BOOL readyForSubmission; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_randomDouble;
+(id)_sampleWindowStartTime;
+(void)_setSampleWindowStartTime:(id)arg1 ;
+(BOOL)shouldCollectPageRenderData;
+(BOOL)shouldCollectPageRenderDataForDocument:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSArray *)requests;
-(void)addRequest:(id)arg1 ;
-(void)setClientCorrelationKey:(NSString *)arg1 ;
-(NSString *)clientCorrelationKey;
-(double)xpSessionDuration;
-(BOOL)xpSamplingForced;
-(double)xpSamplingPercentageUsers;
-(void)setXPSamplingForced:(BOOL)arg1 ;
-(void)setXPSessionDuration:(double)arg1 ;
-(void)setXPSamplingPercentageUsers:(double)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
-(double)pageAppearTime;
-(double)resourceRequestStartTime;
-(double)resourceRequestOnScreenEndTime;
-(double)resourceRequestEndTime;
-(double)pageUserReadyTime;
-(NSArray *)domChanges;
-(NSString *)launchCorrelationKey;
-(double)pageRequestedTime;
-(double)pageDisappearTime;
-(double)platformRequestStartTime;
-(double)platformResponseStartTime;
-(double)platformResponseEndTime;
-(BOOL)platformResponseWasCached;
-(double)platformJsonParseStartTime;
-(double)platformJsonParseEndTime;
-(NSDictionary *)metricsBase;
-(void)populateObjectInspector:(id)arg1 ;
-(void)setLaunchCorrelationKey:(NSString *)arg1 ;
-(void)setPageRequestedTime:(double)arg1 ;
-(void)setPageAppearTime:(double)arg1 ;
-(void)setPageDisappearTime:(double)arg1 ;
-(void)setPlatformRequestStartTime:(double)arg1 ;
-(void)setPlatformResponseStartTime:(double)arg1 ;
-(void)setPlatformResponseEndTime:(double)arg1 ;
-(void)setPlatformResponseWasCached:(BOOL)arg1 ;
-(void)setPlatformJsonParseStartTime:(double)arg1 ;
-(void)setPlatformJsonParseEndTime:(double)arg1 ;
-(void)addDOMChange:(id)arg1 ;
-(void)setResourceRequestStartTime:(double)arg1 ;
-(void)setResourceRequestOnScreenEndTime:(double)arg1 ;
-(void)setResourceRequestEndTime:(double)arg1 ;
-(void)setPageUserReadyTime:(double)arg1 ;
-(void)appendMetricsBaseProperties:(id)arg1 ;
-(void)appendSamplingPropertiesFromClientContext:(id)arg1 ;
-(BOOL)isReadyForSubmission;
-(void)setMetricsBase:(NSDictionary *)arg1 ;
@end

