/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNAvatarImageRenderingScopeInternal.h>

@class PRMonogramColor, NSString;

@interface CNUILikenessRenderingScope : NSObject <CNAvatarImageRenderingScopeInternal> {

	BOOL _rightToLeft;
	double _scale;
	double _strokeWidth;
	CGColorRef _strokeColor;
	unsigned long long _style;
	PRMonogramColor* _color;
	CGSize _pointSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize pointSize;                      //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) double scale;                          //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                    //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,readonly) CGColorRef strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) BOOL rightToLeft;                      //@synthesize rightToLeft=_rightToLeft - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) PRMonogramColor * color;               //@synthesize color=_color - In the implementation block
+(id)renderingScopeWithPointSize:(CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(CGColorRef)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 color:(id)arg7 ;
+(id)renderingScopeWithPointSize:(CGSize)arg1 scale:(double)arg2 rightToLeft:(BOOL)arg3 style:(unsigned long long)arg4 color:(id)arg5 ;
-(unsigned long long)avatarViewStyle;
-(id)likenessRenderingScope;
-(void)dealloc;
-(NSString *)description;
-(double)scale;
-(unsigned long long)style;
-(PRMonogramColor *)color;
-(CGSize)pointSize;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(BOOL)rightToLeft;
-(double)strokeWidth;
-(id)initWithPointSize:(CGSize)arg1 scale:(double)arg2 strokeWidth:(double)arg3 strokeColor:(CGColorRef)arg4 rightToLeft:(BOOL)arg5 style:(unsigned long long)arg6 color:(id)arg7 ;
@end

