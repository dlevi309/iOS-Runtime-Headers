/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect {

	WebSelectionRect* webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect; 
+(id)rectWithWebRect:(id)arg1 ;
+(id)rectsWithWebRects:(id)arg1 ;
-(BOOL)isVertical;
-(CGRect)rect;
-(id)range;
-(WebSelectionRect *)webRect;
-(BOOL)containsEnd;
-(BOOL)containsStart;
-(void)setWebRect:(WebSelectionRect *)arg1 ;
-(long long)writingDirection;
-(id)initWithWebRect:(id)arg1 ;
-(void)dealloc;
@end

