/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSNumber;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {

	long long _style;
	long long _legibilityStyle;
	UIColor* _foregroundColor;
	NSNumber* _overrideHeight;
	double _foregroundAlpha;

}

@property (nonatomic,retain,readonly) NSNumber * overrideHeight;              //@synthesize overrideHeight=_overrideHeight - In the implementation block
@property (nonatomic,readonly) long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long legibilityStyle;                     //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,retain,readonly) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) double foregroundAlpha;                        //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isLegacy;
-(BOOL)isTranslucent;
-(UIColor *)foregroundColor;
-(long long)legibilityStyle;
-(BOOL)isDoubleHeight;
-(double)foregroundAlpha;
-(NSNumber *)overrideHeight;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 overrideHeight:(id)arg4 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 overrideHeight:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 ;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5 ;
@end

