/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateLayout;
-(CGSize)intrinsicContentSize;
-(void)_updateText;
-(void)setText:(NSString *)arg1 ;
-(BOOL)largeText;
-(void)setView:(UIView *)arg1 ;
-(void)setLargeText:(BOOL)arg1 ;
-(NSArray *)extraConstraints;
-(void)setExtraConstraints:(NSArray *)arg1 ;
-(UIView *)view;
-(NSString *)text;
@end

