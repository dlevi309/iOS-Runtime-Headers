/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPResourceLoadingRequest.h>

@class NSData, NSDate, NSNumber, NSDictionary, NSString, TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyRequest : TVPResourceLoadingRequest {

	BOOL _retrievesOfflineKeys;
	unsigned long long _requestID;
	NSData* _certificateData;
	NSData* _contentIdentifierData;
	NSData* _keyRequestData;
	NSDate* _startDate;
	NSNumber* _rentalID;
	NSDictionary* _requestOptions;
	unsigned long long _retryCount;
	NSString* _reportingID;
	TVPPlaybackReportingEventCollection* _eventCollection;
	NSNumber* _requestCompletionTime;
	NSDate* _requestEndDate;
	NSDate* _requestStartDate;

}

@property (nonatomic,copy) NSData * keyRequestData;                                              //@synthesize keyRequestData=_keyRequestData - In the implementation block
@property (nonatomic,copy) NSData * certificateData;                                             //@synthesize certificateData=_certificateData - In the implementation block
@property (nonatomic,copy) NSData * contentIdentifierData;                                       //@synthesize contentIdentifierData=_contentIdentifierData - In the implementation block
@property (nonatomic,copy) NSDictionary * requestOptions;                                        //@synthesize requestOptions=_requestOptions - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                                   //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                      //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,copy) NSNumber * rentalID;                                                  //@synthesize rentalID=_rentalID - In the implementation block
@property (nonatomic,readonly) NSString * reportingID;                                           //@synthesize reportingID=_reportingID - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;              //@synthesize eventCollection=_eventCollection - In the implementation block
@property (nonatomic,retain) NSNumber * requestCompletionTime;                                   //@synthesize requestCompletionTime=_requestCompletionTime - In the implementation block
@property (nonatomic,copy) NSDate * requestEndDate;                                              //@synthesize requestEndDate=_requestEndDate - In the implementation block
@property (nonatomic,copy) NSDate * requestStartDate;                                            //@synthesize requestStartDate=_requestStartDate - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) BOOL isRenewal; 
@property (nonatomic,readonly) BOOL offlineKeyUsageAllowed; 
@property (assign,nonatomic) BOOL retrievesOfflineKeys;                                          //@synthesize retrievesOfflineKeys=_retrievesOfflineKeys - In the implementation block
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSData *)certificateData;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(NSDate *)requestStartDate;
-(NSDate *)requestEndDate;
-(void)setRequestOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)requestOptions;
-(unsigned long long)requestID;
-(NSNumber *)rentalID;
-(void)setRentalID:(NSNumber *)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(NSData *)keyRequestData;
-(BOOL)isRenewal;
-(BOOL)retrievesOfflineKeys;
-(void)setRequestCompletionTime:(NSNumber *)arg1 ;
-(id)initWithAssetResourceLoadingRequest:(id)arg1 ;
-(void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3 ;
-(void)setRequestStartDate:(NSDate *)arg1 ;
-(NSString *)reportingID;
-(void)setContentIdentifierData:(NSData *)arg1 ;
-(void)loadKeyRequestDataAsynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(void)setRequestEndDate:(NSDate *)arg1 ;
-(NSNumber *)requestCompletionTime;
-(id)offlineKeyDataForResponseData:(id)arg1 error:(id*)arg2 ;
-(NSData *)contentIdentifierData;
-(void)setKeyRequestData:(NSData *)arg1 ;
-(BOOL)loadKeyRequestDataWithError:(id*)arg1 ;
-(BOOL)offlineKeyUsageAllowed;
-(void)setRetrievesOfflineKeys:(BOOL)arg1 ;
@end

