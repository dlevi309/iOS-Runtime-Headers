/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject {

	NSData* _faceCropData;
	PVFace* _originatingFace;
	CGSize _cachedImageDimensions;
	short _state;

}

@property (assign,nonatomic) short state;              //@synthesize state=_state - In the implementation block
-(id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2 ;
-(id)originatingFace;
-(id)faceCropData;
-(id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2 ;
-(id)description;
-(CGSize)imageDimensions;
-(void)setState:(short)arg1 ;
-(short)state;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

