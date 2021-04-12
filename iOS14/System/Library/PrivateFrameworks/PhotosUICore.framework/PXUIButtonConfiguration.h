/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXUIButtonConfiguration : NSObject {

	BOOL _allowAnimatedHighlighting;
	long long _cursorEffect;
	UIEdgeInsets _hitTestOutset;

}

@property (assign,nonatomic) UIEdgeInsets hitTestOutset;                  //@synthesize hitTestOutset=_hitTestOutset - In the implementation block
@property (assign,nonatomic) BOOL allowAnimatedHighlighting;              //@synthesize allowAnimatedHighlighting=_allowAnimatedHighlighting - In the implementation block
@property (assign,nonatomic) long long cursorEffect;                      //@synthesize cursorEffect=_cursorEffect - In the implementation block
+(id)configurationWithCursorEffect:(long long)arg1 ;
-(id)init;
-(BOOL)allowAnimatedHighlighting;
-(void)setAllowAnimatedHighlighting:(BOOL)arg1 ;
-(long long)cursorEffect;
-(void)setCursorEffect:(long long)arg1 ;
-(void)setHitTestOutset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTestOutset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

