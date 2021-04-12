/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

@class PKApplePayTrustHashResponse, NSURL, NSData;


@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash; 
@required
-(NSURL *)baseURL;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(id)arg1;
-(id)manifestHashWithReferenceIdentifier:(id)arg1;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(id)arg1;
-(void)setBaseURL:(id)arg1;

@end

