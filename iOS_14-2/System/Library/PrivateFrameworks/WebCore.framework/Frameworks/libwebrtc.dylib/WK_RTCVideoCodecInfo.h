/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(SdpVideoFormat*)nativeSdpVideoFormat;
-(id)initWithNativeSdpVideoFormat:(SdpVideoFormat*)arg1 ;
-(BOOL)isEqualToCodecInfo:(id)arg1 ;
@end

