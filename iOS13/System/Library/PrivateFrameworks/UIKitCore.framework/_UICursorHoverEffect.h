/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICursorEffect.h>

@interface _UICursorHoverEffect : _UICursorEffect {

	BOOL _prefersShadow;
	BOOL _prefersScaledContent;
	long long _preferredTintMode;

}

@property (assign,nonatomic) long long preferredTintMode;              //@synthesize preferredTintMode=_preferredTintMode - In the implementation block
@property (assign,nonatomic) BOOL prefersShadow;                       //@synthesize prefersShadow=_prefersShadow - In the implementation block
@property (assign,nonatomic) BOOL prefersScaledContent;                //@synthesize prefersScaledContent=_prefersScaledContent - In the implementation block
-(id)init;
-(void)setPreferredTintMode:(long long)arg1 ;
-(void)setPrefersScaledContent:(BOOL)arg1 ;
-(long long)preferredTintMode;
-(BOOL)prefersShadow;
-(BOOL)prefersScaledContent;
-(void)setPrefersShadow:(BOOL)arg1 ;
@end

