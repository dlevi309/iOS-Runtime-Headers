/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@interface ASCImageRenderer : NSObject {

	long long _renderingMode;
	CGSize _size;
	UIEdgeInsets _capInsets;

}

@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets capInsets;               //@synthesize capInsets=_capInsets - In the implementation block
@property (nonatomic,readonly) long long renderingMode;              //@synthesize renderingMode=_renderingMode - In the implementation block
+(id)systemImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)bundleImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
-(long long)renderingMode;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(id)description;
-(id)imageWithActions:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)capInsets;
-(id)initWithSize:(CGSize)arg1 capInsets:(UIEdgeInsets)arg2 renderingMode:(long long)arg3 ;
@end

