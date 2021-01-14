/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)compressionQuality;
-(id)init;
-(id)fileExtension;
-(id)imageFromData:(id)arg1 error:(id*)arg2 ;
-(id)dataFromImage:(id)arg1 ;
-(id)imageFromURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithCompressionQuality:(double)arg1 ;
@end

