/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 overrideHeight:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 ;
-(NSNumber *)overrideHeight;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 overrideHeight:(id)arg4 ;
-(double)foregroundAlpha;
-(BOOL)isDoubleHeight;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 ;
-(BOOL)isTranslucent;
-(id)init;
-(BOOL)isLegacy;
-(id)_copyWithZone:(NSZone*)arg1 class:(Class)arg2 ;
-(UIColor *)foregroundColor;
-(id)initWithStyle:(long long)arg1 legacy:(BOOL)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 foregroundAlpha:(double)arg5 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithStyle:(long long)arg1 legibilityStyle:(long long)arg2 foregroundColor:(id)arg3 foregroundAlpha:(double)arg4 ;
-(unsigned long long)hash;
-(long long)legibilityStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

