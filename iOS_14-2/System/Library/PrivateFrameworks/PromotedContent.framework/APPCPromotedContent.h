/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCPromotableContent.h>

@class NSString, NSUUID, NSDictionary, NSURL, NSArray, NSError, NSDate;

@interface APPCPromotedContent : NSObject <APPCPromotableContent> {

	 diagnosticMetricHelper;
	 metricsHelper;
	 identifier;
	 journeyIdentifier;
	 context;
	 metaData;
	 disclosureRendererPayload;
	 minimumTimeBetweenPresentation;
	 brandName;
	 campaignText;
	 representations;
	 bestRepresentation;
	 error;
	 placeholder;
	 serverUnfilledReason;
	 mediaMetricHelper;
	 attachedToView;
	 discarded;
	 consumed;
	 unfilledReasonDelegate;
	 overriddenAdType;
	 discardReason;
	 primitiveCreator;

}

@property (readonly,nonatomic) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper; 
@property (retain,nonatomic) id<APPCJourneyMetricsHelping> metricsHelper; 
@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSString * journeyIdentifier; 
@property (assign,__weak,nonatomic) id<APPCPromotableContext> context; 
@property (copy,nonatomic) NSDictionary * metaData; 
@property (copy,nonatomic) NSURL * disclosureURL; 
@property (copy,nonatomic) NSString * disclosureRendererPayload; 
@property (assign,nonatomic) unsigned long long minimumTimeBetweenPresentation; 
@property (copy,nonatomic) NSString * brandName; 
@property (copy,nonatomic) NSString * campaignText; 
@property (copy,nonatomic) NSArray * representations; 
@property (retain,nonatomic) id<APPCPromotableContentRepresentation> bestRepresentation; 
@property (retain,nonatomic) NSError * error; 
@property (readonly,nonatomic) BOOL placeholder; 
@property (copy,nonatomic) NSDate * expirationDate; 
@property (assign,nonatomic) long long serverUnfilledReason; 
@property (retain,nonatomic) id<APPCMediaMetricsHelping> mediaMetricHelper; 
@property (assign,nonatomic) BOOL attachedToView; 
@property (assign,nonatomic) BOOL discarded; 
@property (assign,nonatomic) BOOL consumed; 
@property (readonly,nonatomic) BOOL isOutstreamVideoAd; 
@property (readonly,nonatomic) BOOL isMRAID; 
@property (readonly,nonatomic) long long adType; 
@property (readonly,nonatomic) NSUUID * contextIdentifier; 
@property (readonly,nonatomic) BOOL available; 
@property (readonly,nonatomic) NSDictionary * transparencyDetailsDictionary; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)available;
-(id)init;
-(long long)adType;
-(NSString *)brandName;
-(void)setBrandName:(NSString *)arg1 ;
-(void)setMetaData:(NSDictionary *)arg1 ;
-(id<APPCPromotableContext>)context;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDiscarded:(BOOL)arg1 ;
-(NSArray *)representations;
-(NSDictionary *)metaData;
-(NSDate *)expirationDate;
-(BOOL)isMRAID;
-(BOOL)placeholder;
-(NSURL *)disclosureURL;
-(NSUUID *)contextIdentifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)consumed;
-(BOOL)discarded;
-(void)setContext:(id<APPCPromotableContext>)arg1 ;
-(NSString *)journeyIdentifier;
-(NSString *)disclosureRendererPayload;
-(unsigned long long)minimumTimeBetweenPresentation;
-(NSString *)campaignText;
-(BOOL)attachedToView;
-(void)setAttachedToView:(BOOL)arg1 ;
-(void)setConsumed:(BOOL)arg1 ;
-(id<APPCJourneyMetricsHelping>)metricsHelper;
-(id<APPCDiagnosticMetricsHelping>)diagnosticMetricHelper;
-(id<APPCMediaMetricsHelping>)mediaMetricHelper;
-(NSDictionary *)transparencyDetailsDictionary;
-(long long)serverUnfilledReason;
-(BOOL)isOutstreamVideoAd;
-(id<APPCPromotableContentRepresentation>)bestRepresentation;
-(void)setBestRepresentation:(id<APPCPromotableContentRepresentation>)arg1 ;
-(void)replaceMetricsHelperWithNewMetricsHelper:(id)arg1 ;
-(void)setJourneyIdentifier:(NSString *)arg1 ;
-(void)setDisclosureRendererPayload:(NSString *)arg1 ;
-(void)setDisclosureURL:(NSURL *)arg1 ;
-(void)setMinimumTimeBetweenPresentation:(unsigned long long)arg1 ;
-(void)setCampaignText:(NSString *)arg1 ;
-(void)setRepresentations:(NSArray *)arg1 ;
-(void)setServerUnfilledReason:(long long)arg1 ;
-(void)setMetricsHelper:(id<APPCJourneyMetricsHelping>)arg1 ;
-(void)setMediaMetricHelper:(id<APPCMediaMetricsHelping>)arg1 ;
@end

