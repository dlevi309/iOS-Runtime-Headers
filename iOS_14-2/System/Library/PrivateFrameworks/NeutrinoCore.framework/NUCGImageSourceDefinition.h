/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition {

	CGImageSourceRef _imageSource;

}

@property (readonly) CGImageSourceRef imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
-(long long)mediaType;
-(id)init;
-(CGImageSourceRef)imageSource;
-(void)dealloc;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 ;
@end

