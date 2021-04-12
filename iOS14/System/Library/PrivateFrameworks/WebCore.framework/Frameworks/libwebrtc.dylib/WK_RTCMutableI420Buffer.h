/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/WK_RTCI420Buffer.h>
#import <libobjc.A.dylib/RTCMutableI420Buffer.h>

@class NSString;

@interface WK_RTCMutableI420Buffer : WK_RTCI420Buffer <RTCMutableI420Buffer>

@property (nonatomic,readonly) int chromaWidth; 
@property (nonatomic,readonly) int chromaHeight; 
@property (nonatomic,readonly) const char* dataY; 
@property (nonatomic,readonly) const char* dataU; 
@property (nonatomic,readonly) const char* dataV; 
@property (nonatomic,readonly) int strideY; 
@property (nonatomic,readonly) int strideU; 
@property (nonatomic,readonly) int strideV; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char* mutableDataY; 
@property (nonatomic,readonly) char* mutableDataU; 
@property (nonatomic,readonly) char* mutableDataV; 
-(char*)mutableDataY;
-(char*)mutableDataU;
-(char*)mutableDataV;
@end

