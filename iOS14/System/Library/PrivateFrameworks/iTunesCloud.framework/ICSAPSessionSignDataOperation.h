/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation {

	NSData* _data;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)setData:(NSData *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(NSData *)data;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
@end

