/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


@class NSData, NSDate, TVPSecureKeyRequest;

@interface TVPSecureKeyResponse : NSObject {

	NSData* _keyData;
	NSDate* _renewalDate;
	TVPSecureKeyRequest* _request;

}

@property (nonatomic,retain) NSData * keyData;                           //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSDate * renewalDate;                       //@synthesize renewalDate=_renewalDate - In the implementation block
@property (nonatomic,retain) TVPSecureKeyRequest * request;              //@synthesize request=_request - In the implementation block
-(void)setRequest:(TVPSecureKeyRequest *)arg1 ;
-(TVPSecureKeyRequest *)request;
-(NSDate *)renewalDate;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
@end

