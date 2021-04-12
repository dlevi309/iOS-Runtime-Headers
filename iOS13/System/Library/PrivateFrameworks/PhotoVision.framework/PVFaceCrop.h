/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)state;
-(void)setState:(short)arg1 ;
-(CGSize)imageDimensions;
-(id)faceCropData;
-(id)originatingFace;
-(id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2 ;
-(id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2 ;
@end

