/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUArticleKeyCommandManager.h>

@protocol NUArticleKeyCommandManager <NSObject>
@property (readonly,nonatomic) BOOL hasBeenTraversed; 
@required
-(BOOL)hasBeenTraversed;
-(id)keyCommandsWithSelector:(SEL)arg1;
-(id)keyCommandsWithSelector:(SEL)arg1;
-(void)handleKeyCommand:(id)arg1;
-(void)handleKeyCommand:(id)arg1;
-(void)handleKey:(id)arg1 flags:(long long)arg2;
-(void)handleKey:(id)arg1 flags:(long long)arg2;
-(void)registerScrollView:(id)arg1;
-(void)registerScrollView:(id)arg1;

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
-(void)setHasBeenTraversed:(BOOL)arg1 ;
-(BOOL)hasBeenTraversed;
-(UIScrollView *)scrollView;
-(id)keyCommandsWithSelector:(SEL)arg1 ;
-(void)handleKeyCommand:(id)arg1 ;
-(void)handleKey:(id)arg1 flags:(long long)arg2 ;
-(void)registerScrollView:(id)arg1 ;
@end

