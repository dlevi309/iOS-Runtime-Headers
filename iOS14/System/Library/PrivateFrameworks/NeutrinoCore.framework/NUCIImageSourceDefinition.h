/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mediaType;
-(id)init;
-(CIImage *)image;
-(long long)orientation;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithCIImage:(id)arg1 orientation:(long long)arg2 ;
@end

