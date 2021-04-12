/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPSecureKeyLoaderDelegate.h>

@protocol TVPSecureKeyDeliveryCoordinatorDelegate;
@class NSObject, TVPPlaybackReportingEventCollection, TVPSecureKeyLoader, NSData, NSMutableSet, NSString;

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate> {

	BOOL _certFetchInProgress;
	NSObject*<TVPSecureKeyDeliveryCoordinatorDelegate> _delegate;
	TVPPlaybackReportingEventCollection* _eventCollection;
	TVPSecureKeyLoader* _secureKeyLoader;
	NSData* _certificateData;
	NSMutableSet* _requestsAwaitingCertFetch;

}

@property (nonatomic,retain) TVPSecureKeyLoader * secureKeyLoader;                                            //@synthesize secureKeyLoader=_secureKeyLoader - In the implementation block
@property (nonatomic,retain) NSData * certificateData;                                                        //@synthesize certificateData=_certificateData - In the implementation block
@property (assign,nonatomic) BOOL certFetchInProgress;                                                        //@synthesize certFetchInProgress=_certFetchInProgress - In the implementation block
@property (nonatomic,retain) NSMutableSet * requestsAwaitingCertFetch;                                        //@synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TVPSecureKeyDeliveryCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;                           //@synthesize eventCollection=_eventCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isSecureKeyDeliveryRequest:(id)arg1 ;
-(id)init;
-(NSObject*<TVPSecureKeyDeliveryCoordinatorDelegate>)delegate;
-(NSData *)certificateData;
-(void)setDelegate:(NSObject*<TVPSecureKeyDeliveryCoordinatorDelegate>)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(NSMutableSet *)requestsAwaitingCertFetch;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(void)setRequestsAwaitingCertFetch:(NSMutableSet *)arg1 ;
-(TVPSecureKeyLoader *)secureKeyLoader;
-(void)setSecureKeyLoader:(TVPSecureKeyLoader *)arg1 ;
-(void)sendStopRequest;
-(void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4 ;
-(void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3 ;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 ;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2 ;
-(void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3 ;
-(void)loadSecureKeyRequest:(id)arg1 ;
-(id)initWithSecureKeyLoader:(id)arg1 ;
-(void)_loadSecureKeyRequest:(id)arg1 sendStartReportingEvent:(BOOL)arg2 ;
-(void)setCertFetchInProgress:(BOOL)arg1 ;
-(void)_finishLoadingWithError:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)certFetchInProgress;
@end

