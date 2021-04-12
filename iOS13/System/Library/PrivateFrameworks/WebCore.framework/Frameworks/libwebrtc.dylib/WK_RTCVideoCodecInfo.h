/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface WK_RTCVideoCodecInfo : NSObject <NSCoding> {

	NSString* _name;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDictionary *)parameters;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(SdpVideoFormat*)nativeSdpVideoFormat;
-(id)initWithNativeSdpVideoFormat:(SdpVideoFormat*)arg1 ;
-(BOOL)isEqualToCodecInfo:(id)arg1 ;
@end

