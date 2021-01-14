/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCMediaNegotiatorMomentsResults : NSObject {

	int _capabilities;
	int _imageType;
	int _videoCodec;
	int _multiwayCapabilities;

}

@property (assign,nonatomic) int capabilities;                               //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) int mulitwayCapabilities;                       //@synthesize multiwayCapabilities=_multiwayCapabilities - In the implementation block
@property (nonatomic,readonly) unsigned avcMomentsCapabilities; 
@property (assign,nonatomic) int imageType;                                  //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) int videoCodec;                                 //@synthesize videoCodec=_videoCodec - In the implementation block
-(int)capabilities;
-(void)setCapabilities:(int)arg1 ;
-(void)setImageType:(int)arg1 ;
-(int)videoCodec;
-(int)imageType;
-(void)setVideoCodec:(int)arg1 ;
-(unsigned)avcMomentsCapabilities;
-(int)mulitwayCapabilities;
-(void)setMulitwayCapabilities:(int)arg1 ;
@end

