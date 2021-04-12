/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UISearchBarLayoutBase : NSObject <NSCopying> {

	BOOL _isLayoutValid;
	BOOL _layoutRTL;
	BOOL _hostedByNavigationBar;
	long long _barMetrics;
	CGSize _layoutSize;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) long long barMetrics;                                                   //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                              //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,getter=isLayoutRTL,nonatomic) BOOL layoutRTL;                                      //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,getter=isHostedByNavigationBar,nonatomic) BOOL hostedByNavigationBar;              //@synthesize hostedByNavigationBar=_hostedByNavigationBar - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                                      //@synthesize layoutSize=_layoutSize - In the implementation block
@property (getter=isLayoutValid,nonatomic,readonly) BOOL layoutValid; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)layoutSize;
-(void)invalidateLayout;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(long long)barMetrics;
-(void)setBarMetrics:(long long)arg1 ;
-(void)updateLayout;
-(void)setLayoutSize:(CGSize)arg1 ;
-(BOOL)isHostedByNavigationBar;
-(void)setHostedByNavigationBar:(BOOL)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)applyLayout;
-(void)updateLayoutIfNeeded;
-(BOOL)isLayoutRTL;
-(BOOL)isLayoutValid;
@end

