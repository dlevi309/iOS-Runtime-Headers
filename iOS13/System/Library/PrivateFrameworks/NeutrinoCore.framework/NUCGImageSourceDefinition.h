/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition {

	CGImageSourceRef _imageSource;

}

@property (readonly) CGImageSourceRef imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)mediaType;
-(CGImageSourceRef)imageSource;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 ;
@end

