/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)range;
-(BOOL)isVertical;
-(BOOL)containsStart;
-(BOOL)containsEnd;
-(CGRect)rect;
-(long long)writingDirection;
-(void)setWebRect:(WebSelectionRect *)arg1 ;
-(id)initWithWebRect:(id)arg1 ;
-(WebSelectionRect *)webRect;
@end

