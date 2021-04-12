/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class CIImage;

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition {

	CIImage* _image;
	long long _orientation;

}

@property (readonly) CIImage * image;                    //@synthesize image=_image - In the implementation block
@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(long long)orientation;
-(CIImage *)image;
-(long long)mediaType;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithCIImage:(id)arg1 orientation:(long long)arg2 ;
@end

