/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

@class PKApplePayTrustHashResponse, NSURL, NSData;


@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash; 
@required
-(NSURL *)baseURL;
-(void)setBaseURL:(id)arg1;
-(id)manifestHashWithReferenceIdentifier:(id)arg1;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(id)arg1;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(id)arg1;

@end

