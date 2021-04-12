/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface PXGGradient : NSObject <NSCopying> {

	UIColor* _startingColor;
	UIColor* _endingColor;
	long long _direction;

}

@property (nonatomic,copy,readonly) UIColor * startingColor;              //@synthesize startingColor=_startingColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * endingColor;                //@synthesize endingColor=_endingColor - In the implementation block
@property (nonatomic,readonly) long long direction;                       //@synthesize direction=_direction - In the implementation block
-(long long)direction;
-(UIColor *)endingColor;
-(id)init;
-(UIColor *)startingColor;
-(id)description;
-(id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 direction:(long long)arg3 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

