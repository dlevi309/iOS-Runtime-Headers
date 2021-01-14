/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSVPlaybackLeaseResponse, NSError;

@interface SSVPlaybackLeaseCallback : NSObject {

	/*^block*/id _block;
	SSVPlaybackLeaseResponse* _response;
	NSError* _error;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) SSVPlaybackLeaseResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(SSVPlaybackLeaseResponse *)response;
-(void)setResponse:(SSVPlaybackLeaseResponse *)arg1 ;
@end

