/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKitCore/UIView.h>

@interface UnreadBubbleCount : UIView {

	CGSize _textSize;
	BOOL _isSelected;
	long long _count;

}

@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isSelected;              //@synthesize isSelected=_isSelected - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
-(void)dealloc;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)calculateTextMetrics;
@end

