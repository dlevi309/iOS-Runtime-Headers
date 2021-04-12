/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTImageEncoder.h>

@class NSString;

@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder> {

	double _compressionQuality;

}

@property (nonatomic,readonly) double compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)fileExtension;
-(double)compressionQuality;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
-(id)initWithCompressionQuality:(double)arg1 ;
@end

