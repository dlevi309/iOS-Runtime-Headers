/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(long long)count;
-(void)drawRect:(CGRect)arg1 ;
-(void)calculateTextMetrics;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end

