/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

@class NSURL, NSString;


@protocol PUImageInfoNode <PXRunNode>
@property (nonatomic,readonly) NSURL * imageDataURL; 
@property (nonatomic,readonly) NSString * imageDataUTI; 
@property (nonatomic,readonly) BOOL useEmbeddedPreview; 
@property (nonatomic,readonly) long long imageExifOrientation; 
@required
-(NSURL *)imageDataURL;
-(NSString *)imageDataUTI;
-(BOOL)useEmbeddedPreview;
-(long long)imageExifOrientation;

@end

