/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXInboxModelMediaProvider.h>

@class NSString;

@interface PXSampleInboxMediaProvider : NSObject <PXInboxModelMediaProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_mockImage;
-(int)requestImageForPreviewItem:(id)arg1 targetSize:(CGSize)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)cancelImageRequest:(int)arg1 ;
@end

