/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
*/


@interface MAXpcManager : NSObject
-(void)setClientName:(id)arg1 ;
-(id)sendSync:(id)arg1 ;
-(void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(/*^block*/id)arg3 ;
-(void)clearConnection:(id)arg1 ;
-(void)ensureConnection;
-(void)sendAsync:(id)arg1 clientHandler:(/*^block*/id)arg2 taskDescriptor:(id)arg3 ;
-(id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2 ;
-(void)setClientConnectionHandler;
-(void)dealloc;
@end

