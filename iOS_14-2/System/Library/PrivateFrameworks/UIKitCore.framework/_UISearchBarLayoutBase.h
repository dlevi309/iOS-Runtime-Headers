/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)applyLayout;
-(void)updateLayoutIfNeeded;
-(void)updateLayout;
-(void)invalidateLayout;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(CGSize)layoutSize;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setHostedByNavigationBar:(BOOL)arg1 ;
-(void)setBarMetrics:(long long)arg1 ;
-(BOOL)isLayoutRTL;
-(void)setLayoutSize:(CGSize)arg1 ;
-(long long)barMetrics;
-(BOOL)isLayoutValid;
-(BOOL)isHostedByNavigationBar;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

