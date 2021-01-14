/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXGNamedImageViewConfiguration : NSObject <NSCopying> {

	NSString* _imageName;
	long long _contentMode;

}

@property (nonatomic,copy) NSString * imageName;                 //@synthesize imageName=_imageName - In the implementation block
@property (assign,nonatomic) long long contentMode;              //@synthesize contentMode=_contentMode - In the implementation block
-(long long)contentMode;
-(id)init;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setContentMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

