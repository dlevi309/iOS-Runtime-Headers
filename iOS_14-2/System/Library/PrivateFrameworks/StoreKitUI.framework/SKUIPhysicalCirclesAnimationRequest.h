/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {

	long long _animationType;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(void)setAnimationType:(long long)arg1 ;
-(long long)animationType;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finishAnimation;
@end

