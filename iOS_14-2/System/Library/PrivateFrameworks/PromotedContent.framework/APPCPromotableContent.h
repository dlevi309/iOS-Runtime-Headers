/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

@class NSString, NSUUID, NSDictionary, NSURL, NSArray, NSError, NSDate;


@protocol APPCPromotableContent
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSUUID * contextIdentifier; 
@property (readonly,nonatomic) NSString * journeyIdentifier; 
@property (readonly,nonatomic) id<APPCPromotableContext> context; 
@property (readonly,nonatomic) NSDictionary * metaData; 
@property (readonly,nonatomic) NSURL * disclosureURL; 
@property (readonly,nonatomic) NSString * disclosureRendererPayload; 
@property (readonly,nonatomic) unsigned long long minimumTimeBetweenPresentation; 
@property (readonly,nonatomic) NSString * brandName; 
@property (readonly,nonatomic) NSString * campaignText; 
@property (readonly,nonatomic) NSArray * representations; 
@property (retain,nonatomic) NSError * error; 
@property (readonly,nonatomic) BOOL placeholder; 
@property (assign,nonatomic) BOOL attachedToView; 
@property (assign,nonatomic) BOOL consumed; 
@property (readonly,nonatomic) long long adType; 
@property (readonly,nonatomic) id<APPCJourneyMetricsHelping> metricsHelper; 
@property (readonly,nonatomic) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper; 
@property (readonly,nonatomic) id<APPCMediaMetricsHelping> mediaMetricHelper; 
@property (readonly,nonatomic) NSDictionary * transparencyDetailsDictionary; 
@property (readonly,nonatomic) NSDate * expirationDate; 
@property (readonly,nonatomic) BOOL available; 
@property (readonly,nonatomic) long long serverUnfilledReason; 
@property (readonly,nonatomic) BOOL isOutstreamVideoAd; 
@property (readonly,nonatomic) BOOL isMRAID; 
@property (retain,nonatomic) id<APPCPromotableContentRepresentation> bestRepresentation; 
@property (readonly,nonatomic) BOOL discarded; 
@required
-(BOOL)available;
-(long long)adType;
-(NSString *)brandName;
-(id<APPCPromotableContext>)context;
-(void)setError:(id)arg1;
-(NSError *)error;
-(NSArray *)representations;
-(NSDictionary *)metaData;
-(NSDate *)expirationDate;
-(BOOL)isMRAID;
-(BOOL)placeholder;
-(NSURL *)disclosureURL;
-(NSUUID *)contextIdentifier;
-(NSString *)identifier;
-(BOOL)consumed;
-(BOOL)discarded;
-(NSString *)journeyIdentifier;
-(NSString *)disclosureRendererPayload;
-(unsigned long long)minimumTimeBetweenPresentation;
-(NSString *)campaignText;
-(BOOL)attachedToView;
-(void)setAttachedToView:(BOOL)arg1;
-(void)setConsumed:(BOOL)arg1;
-(id<APPCJourneyMetricsHelping>)metricsHelper;
-(id<APPCDiagnosticMetricsHelping>)diagnosticMetricHelper;
-(id<APPCMediaMetricsHelping>)mediaMetricHelper;
-(NSDictionary *)transparencyDetailsDictionary;
-(long long)serverUnfilledReason;
-(BOOL)isOutstreamVideoAd;
-(id<APPCPromotableContentRepresentation>)bestRepresentation;
-(void)setBestRepresentation:(id)arg1;
-(void)replaceMetricsHelperWithNewMetricsHelper:(id)arg1;

@end

