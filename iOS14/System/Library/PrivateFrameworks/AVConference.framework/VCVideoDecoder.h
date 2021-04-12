/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCVideoDecoder : NSObject {

	long long _streamToken;
	tagHANDLE* _videoPlayerHandle;
	int _clientCount;

}

@property (readonly) tagHANDLE* videoPlayerHandle; 
+(id)streamTokenDecoderMap;
+(id)decoderForStreamToken:(long long)arg1 withConfig:(tagVideoDecoderConfig*)arg2 ;
+(void)releaseVideoDecoderForStreamToken:(long long)arg1 ;
-(id)initWithConfig:(tagVideoDecoderConfig*)arg1 ;
-(void)dealloc;
-(tagHANDLE*)videoPlayerHandle;
@end

