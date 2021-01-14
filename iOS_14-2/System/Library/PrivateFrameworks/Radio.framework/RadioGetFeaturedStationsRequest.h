/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest;

@interface RadioGetFeaturedStationsRequest : RadioRequest {

	NSObject*<OS_dispatch_queue> _artworkQueue;
	SSURLConnectionRequest* _request;
	unsigned _stationCount;
	BOOL _disableArtworkLoading;
	BOOL _disableCachedResponses;

}

@property (assign,nonatomic) BOOL disableArtworkLoading;               //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) BOOL disableCachedResponses;              //@synthesize disableCachedResponses=_disableCachedResponses - In the implementation block
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)setDisableArtworkLoading:(BOOL)arg1 ;
-(BOOL)disableArtworkLoading;
-(id)initWithStationCount:(unsigned)arg1 ;
-(id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(BOOL)arg3 ;
-(void)startWithFeaturedStationsCompletionHandler:(/*^block*/id)arg1 ;
-(id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableCachedResponses;
-(void)setDisableCachedResponses:(BOOL)arg1 ;
@end

