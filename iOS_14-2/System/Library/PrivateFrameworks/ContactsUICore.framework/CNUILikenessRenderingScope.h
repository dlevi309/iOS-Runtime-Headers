/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNAvatarImageRenderingScopeInternal.h>

@class PRMonogramColor, NSIndexSet, NSString;

@interface CNUILikenessRenderingScope : NSObject <CNAvatarImageRenderingScopeInternal> {

	BOOL _rightToLeft;
	BOOL _excludePointSizeInEqualityCheck;
	double _scale;
	double _strokeWidth;
	CGColorRef _strokeColor;
	unsigned long long _style;
	unsigned long long _backgroundStyle;
	PRMonogramColor* _color;
	NSIndexSet* _maskedAvatarIndices;
	CGSize _pointSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL excludePointSizeInEqualityCheck;              //@synthesize excludePointSizeInEqualityCheck=_excludePointSizeInEqualityCheck - In the implementation block
@property (nonatomic,readonly) CGSize pointSize;                                //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                              //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,readonly) CGColorRef strokeColor;                          //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) BOOL rightToLeft;                                //@synthesize rightToLeft=_rightToLeft - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) PRMonogramColor * color;                         //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NSIndexSet * maskedAvatarIndices;                //@synthesize maskedAvatarIndices=_maskedAvatarIndices - In the implementation block
+(id)renderingScopeWithPointSize:(CGSize)arg1 scale:(double)arg2 rightToLeft:(BOOL)arg3 style:(unsigned long long)arg4 color:(id)arg5 ;
+(id)renderingScopeWithPointSize:(CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(CGColorRef)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9 ;
+(id)renderingScopeWithPointSize:(CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(CGColorRef)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 color:(id)arg7 ;
-(unsigned long long)avatarViewStyle;
-(unsigned long long)avatarViewBackgroundStyle;
-(id)likenessRenderingScope;
-(CGColorRef)strokeColor;
-(NSIndexSet *)maskedAvatarIndices;
-(unsigned long long)backgroundStyle;
-(PRMonogramColor *)color;
-(double)scale;
-(CGSize)pointSize;
-(NSString *)description;
-(double)strokeWidth;
-(unsigned long long)hash;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(BOOL)rightToLeft;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setExcludePointSizeInEqualityCheck:(BOOL)arg1 ;
-(id)initWithPointSize:(CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(CGColorRef)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 backgroundStyle:(unsigned long long)arg7 color:(id)arg8 maskedAvatarIndices:(id)arg9 ;
-(BOOL)excludePointSizeInEqualityCheck;
@end

