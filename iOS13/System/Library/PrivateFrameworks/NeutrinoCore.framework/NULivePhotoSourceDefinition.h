/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@class NUSourceDefinition;

@interface NULivePhotoSourceDefinition : NUSourceDefinition {

	NUSourceDefinition* _image;
	NUSourceDefinition* _video;

}

@property (readonly) NUSourceDefinition * image;              //@synthesize image=_image - In the implementation block
@property (readonly) NUSourceDefinition * video;              //@synthesize video=_video - In the implementation block
-(id)init;
-(id)description;
-(NUSourceDefinition *)image;
-(long long)mediaType;
-(NUSourceDefinition *)video;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2 ;
@end

