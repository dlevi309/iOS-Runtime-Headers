/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPNFCReaderStream.h>

@class HAPNFCReaderXPC;

@interface HAPNFCReaderNotification : HMFObject <HAPNFCReaderStream> {

	HAPNFCReaderXPC* _nfcHomeKit;
	HAPNFCReaderXPC* _tagProxCard;

}

@property (retain) HAPNFCReaderXPC * nfcHomeKit;               //@synthesize nfcHomeKit=_nfcHomeKit - In the implementation block
@property (retain) HAPNFCReaderXPC * tagProxCard;              //@synthesize tagProxCard=_tagProxCard - In the implementation block
+(void)start;
-(void)setTagProxCard:(HAPNFCReaderXPC *)arg1 ;
-(HAPNFCReaderXPC *)nfcHomeKit;
-(id)init;
-(id)setupNotificationDictionaryWithNFCData:(id)arg1 ;
-(void)_sendHomeNotificationForSource:(unsigned long long)arg1 withDictionary:(id)arg2 ;
-(void)_initializeHomeKitNFCStreamWithQueue:(id)arg1 ;
-(void)_initializeProxCardStreamWithQueue:(id)arg1 ;
-(HAPNFCReaderXPC *)tagProxCard;
-(void)nfcStreamIndicationFromSource:(unsigned long long)arg1 withPayload:(id)arg2 ;
-(BOOL)_supportsBackgroundReading;
-(id)_initializeNFCStream:(id)arg1 withSource:(unsigned long long)arg2 workQueue:(id)arg3 ;
-(void)setNfcHomeKit:(HAPNFCReaderXPC *)arg1 ;
@end

