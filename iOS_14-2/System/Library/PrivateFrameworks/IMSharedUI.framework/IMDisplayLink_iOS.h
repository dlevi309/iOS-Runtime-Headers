/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMDisplayLink.h>

@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink {

	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(BOOL)isValid;
-(void)schedule;
-(void)invalidate;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

