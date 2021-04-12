/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (nonatomic,retain) NSString * pageHistoryDescription; 
@property (assign,getter=isCachedResponse,nonatomic) BOOL cachedResponse; 
@property (nonatomic,retain) NSString * clientCorrelationKey; 
@property (assign,nonatomic) double connectionEndTime; 
@property (assign,nonatomic) BOOL connectionReused; 
@property (assign,nonatomic) double connectionStartTime; 
@property (assign,nonatomic) unsigned long long connectionStartNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStartNStatTXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatRXBytes; 
@property (assign,nonatomic) unsigned long long connectionStopNStatTXBytes; 
@property (assign,nonatomic) double domainLookupEndTime; 
@property (assign,nonatomic) double domainLookupStartTime; 
@property (assign,nonatomic) double fetchStartTime; 
@property (nonatomic,retain) NSString * navigationType; 
@property (assign,nonatomic) double pageRenderTime; 
@property (assign,nonatomic) unsigned long long redirectCount; 
@property (assign,nonatomic) double redirectEndTime; 
@property (assign,nonatomic) double redirectStartTime; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
@property (assign,nonatomic) double requestEndTime; 
@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * searchTerm; 
@property (assign,nonatomic) double secureConnectionStartTime; 
@property (nonatomic,retain) NSString * serverApplicationInstance; 
@property (nonatomic,retain) NSString * serverTiming; 
@property (assign,getter=isUbered,nonatomic) BOOL ubered; 
@property (assign,setter=setXPSessionDuration:,nonatomic) double xpSessionDuration; 
@property (assign,setter=setXPSamplingForced:,nonatomic) BOOL xpSamplingForced; 
@property (assign,setter=setXPSamplingPercentageUsers:,nonatomic) double xpSamplingPercentageUsers; 
@property (assign,setter=setXPSamplingPercentageCachedResponses:,nonatomic) double xpSamplingPercentageCachedResponses; 
-(id)init;
-(id)description;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setRequestEndTime:(double)arg1 ;
-(void)setCachedResponse:(BOOL)arg1 ;
-(double)requestEndTime;
-(double)responseEndTime;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(unsigned long long)redirectCount;
-(double)requestStartTime;
-(void)setRequestStartTime:(double)arg1 ;
-(NSString *)navigationType;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setClientCorrelationKey:(NSString *)arg1 ;
-(void)setConnectionEndTime:(double)arg1 ;
-(void)setConnectionReused:(BOOL)arg1 ;
-(void)setConnectionStartNStatRXBytes:(unsigned long long)arg1 ;
-(void)setConnectionStartNStatTXBytes:(unsigned long long)arg1 ;
-(void)setConnectionStartTime:(double)arg1 ;
-(void)setConnectionStopNStatRXBytes:(unsigned long long)arg1 ;
-(void)setConnectionStopNStatTXBytes:(unsigned long long)arg1 ;
-(void)setDomainLookupEndTime:(double)arg1 ;
-(void)setDomainLookupStartTime:(double)arg1 ;
-(void)setFetchStartTime:(double)arg1 ;
-(void)setRedirectEndTime:(double)arg1 ;
-(void)setRedirectStartTime:(double)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setSecureConnectionStartTime:(double)arg1 ;
-(NSString *)clientCorrelationKey;
-(double)connectionEndTime;
-(BOOL)connectionReused;
-(unsigned long long)connectionStartNStatRXBytes;
-(unsigned long long)connectionStartNStatTXBytes;
-(unsigned long long)connectionStopNStatRXBytes;
-(unsigned long long)connectionStopNStatTXBytes;
-(double)connectionStartTime;
-(double)domainLookupEndTime;
-(double)domainLookupStartTime;
-(double)fetchStartTime;
-(double)redirectEndTime;
-(double)redirectStartTime;
-(double)responseStartTime;
-(double)secureConnectionStartTime;
-(double)xpSessionDuration;
-(BOOL)xpSamplingForced;
-(double)xpSamplingPercentageUsers;
-(double)xpSamplingPercentageCachedResponses;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(void)setXPSamplingForced:(BOOL)arg1 ;
-(void)setXPSessionDuration:(double)arg1 ;
-(void)setXPSamplingPercentageUsers:(double)arg1 ;
-(void)setXPSamplingPercentageCachedResponses:(double)arg1 ;
-(void)setServerApplicationInstance:(NSString *)arg1 ;
-(void)setServerTiming:(NSString *)arg1 ;
-(BOOL)isCachedResponse;
-(void)setPageHistoryDescription:(NSString *)arg1 ;
-(NSString *)serverApplicationInstance;
-(BOOL)isUbered;
-(NSString *)pageHistoryDescription;
-(double)pageRenderTime;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(NSString *)serverTiming;
-(void)setNavigationType:(NSString *)arg1 ;
-(void)setPageHistoryDescriptionWithIdentifiers:(id)arg1 ;
-(void)setPageRenderTime:(double)arg1 ;
-(void)setUbered:(BOOL)arg1 ;
@end

