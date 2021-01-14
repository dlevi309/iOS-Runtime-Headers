/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGBaseTexture.h>

@protocol NSCopying;
@interface PXGPayloadTexture : PXGBaseTexture {

	int _presentationType;
	id<NSCopying> _payload;

}

@property (nonatomic,copy,readonly) id<NSCopying> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) int presentationType; 
-(BOOL)isOpaque;
-(id)init;
-(CGImageRef)imageRepresentation;
-(id)initWithPayload:(id)arg1 presentationType:(int)arg2 ;
-(long long)estimatedByteSize;
-(id<NSCopying>)payload;
-(int)presentationType;
-(CGSize)pixelSize;
@end

