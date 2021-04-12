/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIFont;

@interface TopoNumberBadge : CALayer {

	id _owningView;
	long long _count;
	CGSize _imageSize;
	CGSize _textSize;
	UIFont* _font;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
+(id)imageBadgeForCount:(long long)arg1 ;
-(void)dealloc;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(id)initWithOwningView:(id)arg1 ;
-(void)layoutSublayers;
-(CGSize)preferredFrameSize;
-(void)calculateBadgeMetrics;
-(CGImageRef)newNumberBadge;
@end

