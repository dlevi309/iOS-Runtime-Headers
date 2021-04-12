/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject {

	BOOL _hasAutomaticMinimumSize;
	BOOL _hasAutomaticMaximumSize;
	UIWindowScene* _scene;
	CGSize _minimumSize;
	CGSize _maximumSize;

}

@property (assign,nonatomic) CGSize minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;              //@synthesize maximumSize=_maximumSize - In the implementation block
-(id)_initWithScene:(id)arg1 ;
-(CGSize)maximumSize;
-(void)setMinimumSize:(CGSize)arg1 ;
-(CGSize)minimumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
@end

