/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier {

	UIEdgeInsets _edgeInsets;
	BOOL _fitToImage;
	UIColor* _strokeColor;
	BOOL _strokeCurrentPath;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) BOOL fitToImage;                      //@synthesize fitToImage=_fitToImage - In the implementation block
@property (assign,nonatomic) BOOL strokeCurrentPath;               //@synthesize strokeCurrentPath=_strokeCurrentPath - In the implementation block
-(UIColor *)strokeColor;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(BOOL)fitToImage;
-(BOOL)strokeCurrentPath;
-(void)setFitToImage:(BOOL)arg1 ;
-(void)setStrokeCurrentPath:(BOOL)arg1 ;
@end

