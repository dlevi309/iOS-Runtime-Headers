/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)prefersShadow;
-(void)setPreferredTintMode:(long long)arg1 ;
-(void)setPrefersScaledContent:(BOOL)arg1 ;
-(long long)preferredTintMode;
-(BOOL)prefersScaledContent;
-(void)setPrefersShadow:(BOOL)arg1 ;
@end

