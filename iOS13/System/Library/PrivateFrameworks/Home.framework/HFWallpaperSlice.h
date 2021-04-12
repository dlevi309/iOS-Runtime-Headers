/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface HFWallpaperSlice : NSObject <NSCopying> {

	long long _type;
	long long _variant;
	UIImage* _image;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long variant;                       //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(long long)variant;
-(UIImage *)image;
-(id)initWithType:(long long)arg1 variant:(long long)arg2 identifier:(id)arg3 image:(id)arg4 ;
-(BOOL)isSlicedFromWallpaper:(id)arg1 ;
@end

