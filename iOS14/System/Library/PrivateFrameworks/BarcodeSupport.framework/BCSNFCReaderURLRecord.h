/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol NFNdefMessage;
@class NSURL;

@interface BCSNFCReaderURLRecord : NSObject {

	NSURL* _url;
	id<NFNdefMessage> _message;

}

@property (nonatomic,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) id<NFNdefMessage> message;              //@synthesize message=_message - In the implementation block
-(id<NFNdefMessage>)message;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 message:(id)arg2 ;
@end

