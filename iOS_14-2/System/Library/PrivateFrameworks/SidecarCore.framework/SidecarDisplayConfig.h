/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
*/

#import <SidecarCore/SidecarCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SidecarDevice, NSNumber, NSString;

@interface SidecarDisplayConfig : NSObject <NSCopying, NSSecureCoding> {

	SidecarDevice* _device;
	NSNumber* _cipher;
	NSNumber* _codec;
	NSNumber* _displayID;
	NSNumber* _enableTimeSync;
	NSNumber* _framerate;
	NSNumber* _keyFrameInterval;
	NSNumber* _lowLatency;
	NSNumber* _rtcp;
	NSNumber* _rtcpTimeoutInterval;
	NSString* _service;
	NSNumber* _showTouchBar;
	NSNumber* _showSideBar;
	double _scale;
	NSNumber* _tilesPerFrame;
	long long _transport;
	NSNumber* _dataLink;
	NSNumber* _txMinBitrate;
	NSNumber* _txMaxBitrate;
	CGSize _size;

}

@property (nonatomic,retain) SidecarDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSNumber * cipher;                           //@synthesize cipher=_cipher - In the implementation block
@property (nonatomic,retain) NSNumber * codec;                            //@synthesize codec=_codec - In the implementation block
@property (nonatomic,retain) NSNumber * displayID;                        //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,retain) NSNumber * enableTimeSync;                   //@synthesize enableTimeSync=_enableTimeSync - In the implementation block
@property (nonatomic,retain) NSNumber * framerate;                        //@synthesize framerate=_framerate - In the implementation block
@property (nonatomic,retain) NSNumber * keyFrameInterval;                 //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (nonatomic,retain) NSNumber * lowLatency;                       //@synthesize lowLatency=_lowLatency - In the implementation block
@property (nonatomic,retain) NSNumber * rtcp;                             //@synthesize rtcp=_rtcp - In the implementation block
@property (nonatomic,retain) NSNumber * rtcpTimeoutInterval;              //@synthesize rtcpTimeoutInterval=_rtcpTimeoutInterval - In the implementation block
@property (nonatomic,copy) NSString * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNumber * showTouchBar;                     //@synthesize showTouchBar=_showTouchBar - In the implementation block
@property (nonatomic,retain) NSNumber * showSideBar;                      //@synthesize showSideBar=_showSideBar - In the implementation block
@property (assign,nonatomic) CGSize size;                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSNumber * tilesPerFrame;                    //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
@property (assign,nonatomic) long long transport;                         //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) NSNumber * dataLink;                         //@synthesize dataLink=_dataLink - In the implementation block
@property (nonatomic,retain) NSNumber * txMinBitrate;                     //@synthesize txMinBitrate=_txMinBitrate - In the implementation block
@property (nonatomic,retain) NSNumber * txMaxBitrate;                     //@synthesize txMaxBitrate=_txMaxBitrate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)codec;
-(void)setCodec:(NSNumber *)arg1 ;
-(NSNumber *)lowLatency;
-(void)setLowLatency:(NSNumber *)arg1 ;
-(long long)transport;
-(NSNumber *)rtcp;
-(void)setDisplayID:(NSNumber *)arg1 ;
-(CGSize)size;
-(void)setFramerate:(NSNumber *)arg1 ;
-(double)scale;
-(void)setTransport:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)framerate;
-(void)setSize:(CGSize)arg1 ;
-(SidecarDevice *)device;
-(NSNumber *)cipher;
-(NSNumber *)displayID;
-(void)setScale:(double)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDevice:(SidecarDevice *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)service;
-(NSNumber *)keyFrameInterval;
-(void)setKeyFrameInterval:(NSNumber *)arg1 ;
-(NSNumber *)txMaxBitrate;
-(NSNumber *)txMinBitrate;
-(NSNumber *)tilesPerFrame;
-(void)setTxMinBitrate:(NSNumber *)arg1 ;
-(void)setTxMaxBitrate:(NSNumber *)arg1 ;
-(void)setTilesPerFrame:(NSNumber *)arg1 ;
-(void)setRtcpTimeoutInterval:(NSNumber *)arg1 ;
-(NSNumber *)rtcpTimeoutInterval;
-(void)setCipher:(NSNumber *)arg1 ;
-(NSNumber *)enableTimeSync;
-(void)setEnableTimeSync:(NSNumber *)arg1 ;
-(void)setRtcp:(NSNumber *)arg1 ;
-(NSNumber *)showTouchBar;
-(void)setShowTouchBar:(NSNumber *)arg1 ;
-(NSNumber *)showSideBar;
-(void)setShowSideBar:(NSNumber *)arg1 ;
-(NSNumber *)dataLink;
-(void)setDataLink:(NSNumber *)arg1 ;
@end

