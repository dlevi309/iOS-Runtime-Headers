/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleKeyCommandManager.h>

@protocol NUArticleKeyCommandManager <NSObject>
@property (nonatomic,readonly) BOOL hasBeenTraversed; 
@required
-(void)handleKey:(id)arg1 flags:(long long)arg2;
-(id)keyCommandsWithSelector:(SEL)arg1;
-(void)handleKeyCommand:(id)arg1;
-(void)registerScrollView:(id)arg1;
-(BOOL)hasBeenTraversed;

@end


@class UIScrollView, NSString;

@interface NUArticleKeyCommandManager : NSObject <NUArticleKeyCommandManager> {

	BOOL _hasBeenTraversed;
	UIScrollView* _scrollView;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL hasBeenTraversed;                           //@synthesize hasBeenTraversed=_hasBeenTraversed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScrollView *)scrollView;
-(void)handleKey:(id)arg1 flags:(long long)arg2 ;
-(void)setHasBeenTraversed:(BOOL)arg1 ;
-(id)keyCommandsWithSelector:(SEL)arg1 ;
-(void)handleKeyCommand:(id)arg1 ;
-(void)registerScrollView:(id)arg1 ;
-(BOOL)hasBeenTraversed;
@end

