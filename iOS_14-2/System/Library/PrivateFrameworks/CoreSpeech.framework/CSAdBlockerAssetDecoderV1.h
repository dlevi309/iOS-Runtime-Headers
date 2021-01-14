/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSMutableDictionary, NSData;

@interface CSAdBlockerAssetDecoderV1 : NSObject {

	float _maxFingerprintBufferSize;
	NSMutableDictionary* _shouldResetAdsDictionary;
	NSData* _payloadData;

}

@property (nonatomic,retain) NSData * payloadData;                                          //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) float maxFingerprintBufferSize;                              //@synthesize maxFingerprintBufferSize=_maxFingerprintBufferSize - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * shouldResetAdsDictionary;              //@synthesize shouldResetAdsDictionary=_shouldResetAdsDictionary - In the implementation block
-(NSData *)payloadData;
-(id)initWithData:(id)arg1 ;
-(void)setPayloadData:(NSData *)arg1 ;
-(float)maxFingerprintBufferSize;
-(NSMutableDictionary *)shouldResetAdsDictionary;
@end

