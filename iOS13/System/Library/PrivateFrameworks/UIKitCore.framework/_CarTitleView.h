/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, NSString, NSArray;

@interface _CarTitleView : UIView {

	BOOL _largeText;
	UIView* _view;
	NSString* _text;
	NSArray* _extraConstraints;

}

@property (nonatomic,retain) UIView * view;                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL largeText;                          //@synthesize largeText=_largeText - In the implementation block
@property (nonatomic,retain) NSArray * extraConstraints;              //@synthesize extraConstraints=_extraConstraints - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSArray *)extraConstraints;
-(void)setExtraConstraints:(NSArray *)arg1 ;
-(void)_updateText;
-(void)_updateLayout;
-(BOOL)largeText;
-(void)setLargeText:(BOOL)arg1 ;
@end

