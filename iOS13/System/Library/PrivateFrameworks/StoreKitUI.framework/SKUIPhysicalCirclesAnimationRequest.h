/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {

	long long _animationType;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)animationType;
-(void)setAnimationType:(long long)arg1 ;
-(void)finishAnimation;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
@end

