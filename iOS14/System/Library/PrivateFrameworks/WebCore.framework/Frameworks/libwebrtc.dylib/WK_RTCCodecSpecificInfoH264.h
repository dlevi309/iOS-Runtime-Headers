/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCCodecSpecificInfo.h>

@class NSString;

@interface WK_RTCCodecSpecificInfoH264 : NSObject <RTCCodecSpecificInfo> {

	unsigned long long _packetizationMode;

}

@property (assign,nonatomic) unsigned long long packetizationMode;              //@synthesize packetizationMode=_packetizationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)packetizationMode;
-(CodecSpecificInfo*)nativeCodecSpecificInfo;
-(void)setPacketizationMode:(unsigned long long)arg1 ;
@end

