/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTImageEncoder.h>

@class NSString;

@interface AVTImageIOImageEncoder : NSObject <AVTImageEncoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)typeIdentifier;
+(id)addImageOptions;
-(id)fileExtension;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
-(id)imageFromImageSource:(CGImageSourceRef)arg1 error:(id*)arg2 ;
@end

