/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libobjc.A.dylib/RTCVideoDecoderFactory.h>

@class NSString;

@interface WK_RTCDefaultVideoDecoderFactory : NSObject <RTCVideoDecoderFactory> {

	BOOL _supportsH265;
	BOOL _supportsVP9;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedCodecs;
-(id)createDecoder:(id)arg1 ;
-(id)initWithH265:(BOOL)arg1 vp9:(BOOL)arg2 ;
@end

