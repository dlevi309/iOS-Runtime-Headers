/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBSplitTraits : NSObject {

	unsigned long long _corners;
	CGRect _leftFrame;
	CGRect _rightFrame;

}

@property (nonatomic,readonly) CGRect leftFrame;                        //@synthesize leftFrame=_leftFrame - In the implementation block
@property (nonatomic,readonly) CGRect rightFrame;                       //@synthesize rightFrame=_rightFrame - In the implementation block
@property (nonatomic,readonly) unsigned long long corners;              //@synthesize corners=_corners - In the implementation block
+(id)traitsWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned long long)arg3 ;
-(CGRect)rightFrame;
-(CGRect)leftFrame;
-(id)initWithLeftFrame:(CGRect)arg1 rightFrame:(CGRect)arg2 corners:(unsigned long long)arg3 ;
-(unsigned long long)corners;
@end

