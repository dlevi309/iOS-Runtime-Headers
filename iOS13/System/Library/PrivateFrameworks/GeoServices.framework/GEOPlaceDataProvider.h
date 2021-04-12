/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(BOOL)isLoading;
-(void)cancelRequest;
-(void)setFinishedHandler:(id)arg1 ;
-(id)finishedHandler;
-(void)setIsLoading:(BOOL)arg1 ;
-(void)startProviderWithRequest:(id)arg1 appIdentifier:(id)arg2 ;
-(void)cancelProviderRequest;
-(void)requestCompleted;
-(void)providerReceivedErrorCode:(long long)arg1 userInfo:(id)arg2 ;
-(void)startRequest:(id)arg1 appIdentifier:(id)arg2 finished:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)providerReceivedResponse:(id)arg1 userInfo:(id)arg2 ;
-(void)providerDidCancel;
@end

