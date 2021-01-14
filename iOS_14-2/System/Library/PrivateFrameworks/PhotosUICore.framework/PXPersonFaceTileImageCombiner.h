/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXPersonFaceTileImageCombiner : NSObject {

	unsigned long long _currentGeneration;

}
+(void)initialize;
+(id)_generateCombinedImageFromImages:(id)arg1 context:(id)arg2 ;
+(id)placeholderImageForNumberOfFaces:(unsigned long long)arg1 context:(id)arg2 ;
-(void)requestImageForPersons:(id)arg1 context:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_returnCombinedImage:(id)arg1 generation:(unsigned long long)arg2 resultHandler:(/*^block*/id)arg3 ;
@end

