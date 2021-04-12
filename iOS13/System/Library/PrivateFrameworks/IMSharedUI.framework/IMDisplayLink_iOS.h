/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMDisplayLink.h>

@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink {

	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)schedule;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
@end

