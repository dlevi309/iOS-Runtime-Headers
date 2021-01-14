/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@interface GEOPlaceDataProvider : NSObject {

	BOOL _isLoading;
	/*^block*/id _finishedHandler;
	/*^block*/id _errorHandler;

}

@property (assign,nonatomic) BOOL isLoading;                //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) id finishedHandler;              //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                 //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)cancelRequest;
-(BOOL)isLoading;
-(void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2 ;
-(void)cancelProviderRequest;
-(void)requestCompleted;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)providerDidCancel;
-(void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2 ;
-(void)setFinishedHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)dealloc;
-(void)setIsLoading:(BOOL)arg1 ;
@end

