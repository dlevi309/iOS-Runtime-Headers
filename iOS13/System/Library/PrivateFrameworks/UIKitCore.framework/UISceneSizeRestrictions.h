/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(id)_initWithScene:(id)arg1 ;
@end

