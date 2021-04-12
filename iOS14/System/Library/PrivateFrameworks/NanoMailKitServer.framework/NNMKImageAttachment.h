/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <NanoMailKitServer/NNMKAttachment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding> {

	BOOL _renderOnClient;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL renderOnClient;              //@synthesize renderOnClient=_renderOnClient - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                 //@synthesize imageSize=_imageSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGSize)imageSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)renderOnClient;
-(void)setRenderOnClient:(BOOL)arg1 ;
@end

