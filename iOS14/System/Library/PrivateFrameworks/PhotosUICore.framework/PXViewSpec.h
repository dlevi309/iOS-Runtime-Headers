/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface PXViewSpec : NSObject <NSCopying> {

	BOOL _hidden;
	UIColor* _backgroundColor;
	UIColor* _selectionHighlightColor;
	UIColor* _borderColor;
	double _borderWidth;
	double _cornerRadius;
	double _displayScale;
	long long _compositingFilterType;

}

@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * selectionHighlightColor;              //@synthesize selectionHighlightColor=_selectionHighlightColor - In the implementation block
@property (nonatomic,copy) UIColor * borderColor;                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double displayScale;                          //@synthesize displayScale=_displayScale - In the implementation block
@property (assign,nonatomic) long long compositingFilterType;              //@synthesize compositingFilterType=_compositingFilterType - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                  //@synthesize hidden=_hidden - In the implementation block
-(void)setDisplayScale:(double)arg1 ;
-(double)displayScale;
-(BOOL)isHidden;
-(id)init;
-(UIColor *)selectionHighlightColor;
-(UIColor *)borderColor;
-(void)setHidden:(BOOL)arg1 ;
-(long long)compositingFilterType;
-(void)setCompositingFilterType:(long long)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setSelectionHighlightColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(double)cornerRadius;
-(double)borderWidth;
-(unsigned long long)hash;
-(void)setCornerRadius:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
@end

