/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mediaType;
-(id)init;
-(NUSourceDefinition *)video;
-(NUSourceDefinition *)image;
-(id)description;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithImageSourceDefinition:(id)arg1 videoSourceDefinition:(id)arg2 ;
@end

