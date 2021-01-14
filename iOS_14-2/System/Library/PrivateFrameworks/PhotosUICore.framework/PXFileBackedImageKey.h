/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSURL;

@interface PXFileBackedImageKey : NSObject {

	NSURL* _url;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * url;              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) CGSize size;              //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(NSURL *)url;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUrl:(id)arg1 size:(CGSize)arg2 ;
@end

