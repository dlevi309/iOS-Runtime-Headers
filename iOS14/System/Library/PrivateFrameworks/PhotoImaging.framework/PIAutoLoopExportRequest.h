/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUVideoExportRequest.h>

@class NSString, NSURL, NUColorSpace;

@interface PIAutoLoopExportRequest : NUVideoExportRequest {

	NSString* _destinationUTI;
	NSURL* _destinationLongExposureURL;
	NSURL* _destinationMaskURL;

}

@property (readonly) NSString * destinationUTI;                       //@synthesize destinationUTI=_destinationUTI - In the implementation block
@property (readonly) NSURL * destinationLongExposureURL;              //@synthesize destinationLongExposureURL=_destinationLongExposureURL - In the implementation block
@property (readonly) NSURL * destinationMaskURL;                      //@synthesize destinationMaskURL=_destinationMaskURL - In the implementation block
@property (readonly) NUColorSpace * outputColorSpace; 
-(void)submit:(/*^block*/id)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id)initWithComposition:(id)arg1 destinationURL:(id)arg2 ;
-(NUColorSpace *)outputColorSpace;
-(id)initWithComposition:(id)arg1 stabilizedVideoURL:(id)arg2 longExposureDestinationURL:(id)arg3 maskDestinationURL:(id)arg4 destinationUTI:(id)arg5 ;
-(NSString *)destinationUTI;
-(NSURL *)destinationLongExposureURL;
-(NSURL *)destinationMaskURL;
@end

