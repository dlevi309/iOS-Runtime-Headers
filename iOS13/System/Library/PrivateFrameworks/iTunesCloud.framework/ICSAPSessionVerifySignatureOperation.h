/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setSignatureData:(NSData *)arg1 ;
-(NSData *)signatureData;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
@end

