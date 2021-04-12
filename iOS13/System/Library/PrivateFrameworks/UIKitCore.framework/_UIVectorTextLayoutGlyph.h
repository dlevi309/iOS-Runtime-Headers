/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVectorTextLayoutGlyph.h>
@class UIBezierPath;


@protocol _UIVectorTextLayoutGlyph <NSObject>
@property (nonatomic,readonly) unsigned short glyph; 
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) UIBezierPath * path; 
@property (nonatomic,readonly) CGAffineTransform pathTransform; 
@required
-(UIBezierPath *)path;
-(unsigned short)glyph;
-(CGRect)rect;
-(CGAffineTransform)pathTransform;

@end


@class UIBezierPath, NSString;

@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph> {

	unsigned short _glyph;
	UIBezierPath* _path;
	CGRect _rect;
	CGAffineTransform _pathTransform;

}

@property (assign,nonatomic) unsigned short glyph;                         //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) CGRect rect;                                  //@synthesize rect=_rect - In the implementation block
@property (nonatomic,retain) UIBezierPath * path;                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CGAffineTransform pathTransform;              //@synthesize pathTransform=_pathTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(unsigned short)glyph;
-(CGRect)rect;
-(void)setRect:(CGRect)arg1 ;
-(CGAffineTransform)pathTransform;
-(void)setGlyph:(unsigned short)arg1 ;
-(void)setPathTransform:(CGAffineTransform)arg1 ;
@end

