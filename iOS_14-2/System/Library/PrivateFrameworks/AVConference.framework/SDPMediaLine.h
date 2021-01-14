/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, VCImageAttributeRules, NSArray, NSString;

@interface SDPMediaLine : NSObject {

	NSMutableArray* _attributes;
	VCImageAttributeRules* _imageAttributeRules;
	NSMutableArray* _payloads;
	unsigned _rtpId;
	int _rtcpPort;
	int _rtpPort;
	BOOL _allowRTCPFB;

}

@property (assign,nonatomic) unsigned rtpId;                                           //@synthesize rtpId=_rtpId - In the implementation block
@property (nonatomic,readonly) BOOL allowRTCPFB;                                       //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (nonatomic,readonly) int rtcpPort;                                           //@synthesize rtcpPort=_rtcpPort - In the implementation block
@property (nonatomic,readonly) int rtpPort;                                            //@synthesize rtpPort=_rtpPort - In the implementation block
@property (nonatomic,readonly) NSArray * attributes;                                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSArray * payloads;                                     //@synthesize payloads=_payloads - In the implementation block
@property (nonatomic,retain) VCImageAttributeRules * imageAttributeRules;              //@synthesize imageAttributeRules=_imageAttributeRules - In the implementation block
@property (nonatomic,readonly) NSString * string; 
+(void)fillImageStruct:(id)arg1 imageStruct:(imageTag*)arg2 ;
+(void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(imageTag*)arg3 ;
+(void)fillImageArray:(id)arg1 imageArray:(imageTag*)arg2 ;
-(id)init;
-(unsigned)rtpId;
-(NSArray *)attributes;
-(void)addAttribute:(id)arg1 ;
-(int)rtpPort;
-(NSString *)string;
-(NSArray *)payloads;
-(void)dealloc;
-(void)addPayload:(int)arg1 rtpMap:(id)arg2 formatParameters:(id)arg3 ;
-(void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(imageTag*)arg3 count:(int)arg4 ;
-(id)videoImageAttributes:(int)arg1 ;
-(id)getVideoSendImages:(id)arg1 ;
-(BOOL)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4 ;
-(id)getVideoRecvImages:(id)arg1 ;
-(BOOL)allowRTCPFB;
-(id)initWithParser:(id)arg1 rtpPort:(int)arg2 payloads:(id)arg3 ;
-(void)parseMediaLine:(id)arg1 ;
-(VCImageAttributeRules *)imageAttributeRules;
-(void)setImageAttributeRules:(VCImageAttributeRules *)arg1 ;
-(void)setRtpId:(unsigned)arg1 ;
-(void)addWifiRules:(id)arg1 cellularRules:(id)arg2 payload:(int)arg3 direction:(int)arg4 ;
-(void)appendPayload:(int)arg1 dimensions:(imageTag*)arg2 direction:(int)arg3 attributeString:(id)arg4 ;
-(void)addImageAttributeRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 direction:(int)arg4 attributeString:(id)arg5 ;
-(void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2 ;
-(void)parseImageAttributeRules:(id)arg1 ;
-(void)parseAttribute:(id)arg1 ;
-(BOOL)videoDisplayAttribute:(int*)arg1 withHeight:(int*)arg2 ;
-(int)rtcpPort;
@end

