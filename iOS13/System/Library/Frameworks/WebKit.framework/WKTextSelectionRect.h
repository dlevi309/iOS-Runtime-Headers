/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UITextSelectionRect.h>

@class WebSelectionRect;

@interface WKTextSelectionRect : UITextSelectionRect {

	WebSelectionRect* _webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect;              //@synthesize webRect=_webRect - In the implementation block
+(id)textSelectionRectsWithWebRects:(id)arg1 ;
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

