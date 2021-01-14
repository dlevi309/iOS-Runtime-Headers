/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)navigationType;
-(double)fetchStartTime;
-(double)responseEndTime;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)referringAppName;
-(void)setXPSamplingPercentageUsers:(double)arg1 ;
-(void)setConnectionEndTime:(double)arg1 ;
-(void)setDomainLookupEndTime:(double)arg1 ;
-(unsigned long long)connectionStartNStatTXBytes;
-(void)setRedirectStartTime:(double)arg1 ;
-(double)domainLookupStartTime;
-(double)domainLookupEndTime;
-(BOOL)xpSamplingForced;
-(id)init;
-(void)setNavigationType:(NSString *)arg1 ;
-(void)setPageRenderTime:(double)arg1 ;
-(double)connectionEndTime;
-(double)secureConnectionStartTime;
-(double)redirectStartTime;
-(void)setCachedResponse:(BOOL)arg1 ;
-(void)setXPSessionDuration:(double)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(BOOL)connectionReused;
-(NSString *)searchTerm;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setRedirectEndTime:(double)arg1 ;
-(void)setSecureConnectionStartTime:(double)arg1 ;
-(NSString *)referringURL;
-(unsigned long long)connectionStopNStatRXBytes;
-(double)responseStartTime;
-(void)setConnectionReused:(BOOL)arg1 ;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(double)requestEndTime;
-(double)pageRenderTime;
-(void)setXPSamplingForced:(BOOL)arg1 ;
-(NSString *)clientCorrelationKey;
-(void)setServerApplicationInstance:(NSString *)arg1 ;
-(unsigned long long)connectionStartNStatRXBytes;
-(id)description;
-(void)setConnectionStartTime:(double)arg1 ;
-(void)setConnectionStartNStatRXBytes:(unsigned long long)arg1 ;
-(unsigned long long)redirectCount;
-(unsigned long long)connectionStopNStatTXBytes;
-(BOOL)isUbered;
-(void)setRequestStartTime:(double)arg1 ;
-(BOOL)isCachedResponse;
-(void)setServerTiming:(NSString *)arg1 ;
-(void)setUbered:(BOOL)arg1 ;
-(NSString *)serverApplicationInstance;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setClientCorrelationKey:(NSString *)arg1 ;
-(void)setConnectionStopNStatTXBytes:(unsigned long long)arg1 ;
-(double)xpSamplingPercentageCachedResponses;
-(double)requestStartTime;
-(void)setConnectionStopNStatRXBytes:(unsigned long long)arg1 ;
-(double)xpSessionDuration;
-(double)connectionStartTime;
-(void)setPageHistoryDescriptionWithIdentifiers:(id)arg1 ;
-(double)redirectEndTime;
-(NSString *)serverTiming;
-(void)setConnectionStartNStatTXBytes:(unsigned long long)arg1 ;
-(NSString *)pageHistoryDescription;
-(void)setXPSamplingPercentageCachedResponses:(double)arg1 ;
-(void)setDomainLookupStartTime:(double)arg1 ;
-(void)setRequestEndTime:(double)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(void)setPageHistoryDescription:(NSString *)arg1 ;
-(double)xpSamplingPercentageUsers;
-(void)setFetchStartTime:(double)arg1 ;
@end

