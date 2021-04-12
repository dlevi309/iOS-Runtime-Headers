/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithConfig:(tagVideoDecoderConfig*)arg1 ;
-(tagHANDLE*)videoPlayerHandle;
@end

