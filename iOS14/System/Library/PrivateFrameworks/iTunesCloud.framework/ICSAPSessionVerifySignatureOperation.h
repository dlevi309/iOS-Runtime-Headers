/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData, NSMutableData;

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation {

	NSData* _signatureData;
	NSMutableData* _data;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSData * signatureData;              //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)setData:(NSMutableData *)arg1 ;
-(NSData *)signatureData;
-(void)setResponseHandler:(id)arg1 ;
-(NSMutableData *)data;
-(void)setSignatureData:(NSData *)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
@end

