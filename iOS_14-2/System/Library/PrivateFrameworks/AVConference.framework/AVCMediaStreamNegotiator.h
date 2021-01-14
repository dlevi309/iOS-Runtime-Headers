/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSData, NSString, VCMediaNegotiator;

@interface AVCMediaStreamNegotiator : NSObject {

	long long _errorDetailCode;
	long long _videoHeight;
	long long _videoWidth;
	long long _dpiFactor;
	unsigned char _deviceRole;
	NSData* _mediaBlobCompressed;
	NSData* _mediaBlobNegotiated;
	NSString* _dataSessionID;
	long long _mediaStreamMode;
	VCMediaNegotiator* _mediaNegotiator;
	NSData* _remoteCallInfoBlob;
	unsigned long long _videoHDRMode;
	NSData* _offer;
	NSData* _answer;

}

@property (nonatomic,readonly) NSData * offer;               //@synthesize offer=_offer - In the implementation block
@property (nonatomic,readonly) NSData * answer;              //@synthesize answer=_answer - In the implementation block
-(NSData *)answer;
-(id)supportedPixelFormats;
-(BOOL)createAnswer;
-(NSData *)offer;
-(void)dealloc;
-(id)initWithMode:(long long)arg1 error:(id*)arg2 ;
-(void)refreshLoggingParameters;
-(int)AVConferenceOperatingModeWithAVCMediaStreamMode:(long long)arg1 ;
-(long long)AVCVideoStreamModeWithAVCMediaStreamMode:(long long)arg1 ;
-(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
-(unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(long long)arg1 ;
-(BOOL)processOffererInitOptions:(id)arg1 errorReason:(id*)arg2 ;
-(BOOL)initNegotiatorLocalConfiguration:(id*)arg1 ;
-(BOOL)createOffer;
-(id)initWithMode:(long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)addLocalCallInfoBlobToOutgoingDictionary:(id)arg1 ;
-(id)initWithOffer:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)processOfferWithError:(id*)arg1 errorReason:(id*)arg2 ;
-(BOOL)processAnswererInitOptions:(id)arg1 errorReason:(id*)arg2 ;
-(BOOL)processAnswerWithError:(id*)arg1 errorReason:(id*)arg2 ;
-(unsigned)pickBestPixelFormatFromSet:(id)arg1 ;
-(unsigned)pickBestPixelFormatFromSet:(id)arg1 preferenceList:(unsigned*)arg2 count:(int)arg3 acceptDefault:(BOOL)arg4 ;
-(id)initWithOffer:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAnswer:(id)arg1 withError:(id*)arg2 ;
-(id)generateMediaStreamConfigurationWithError:(id*)arg1 ;
-(id)generateMediaStreamInitOptionsWithError:(id*)arg1 ;
@end

