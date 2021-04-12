/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation, NSString;

@interface RadioRecentStationsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	RadioStation* _currentStation;
	NSString* _currentStationStringID;
	BOOL _shouldGroupResponses;
	unsigned long long _stationCount;

}

@property (assign,nonatomic) BOOL shouldGroupResponses;                    //@synthesize shouldGroupResponses=_shouldGroupResponses - In the implementation block
@property (assign,nonatomic) unsigned long long stationCount;              //@synthesize stationCount=_stationCount - In the implementation block
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)stationCount;
-(void)getCachedRecentStationsResponseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCurrentStation:(id)arg1 ;
-(void)setShouldGroupResponses:(BOOL)arg1 ;
-(id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1 ;
-(id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id*)arg2 ;
-(void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id*)arg2 ;
-(id)initWithCurrentStationStringID:(id)arg1 ;
-(BOOL)shouldGroupResponses;
-(void)setStationCount:(unsigned long long)arg1 ;
@end

