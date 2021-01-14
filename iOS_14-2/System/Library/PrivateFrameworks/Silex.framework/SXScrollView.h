/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDScrollView.h>
#import <libobjc.A.dylib/SXAXElementOccluder.h>

@protocol SXScrollViewDelegate;
@class SXAXCustomRotorProvider, NSString;

@interface SXScrollView : TSDScrollView <SXAXElementOccluder> {

	id<SXScrollViewDelegate> _scrollViewDelegate;
	SXAXCustomRotorProvider* _customRotorProvider;

}

@property (nonatomic,retain) SXAXCustomRotorProvider * customRotorProvider;                   //@synthesize customRotorProvider=_customRotorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SXScrollViewDelegate> scrollViewDelegate;              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isBouncing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canBecomeFocused;
-(id<SXScrollViewDelegate>)scrollViewDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(SXAXCustomRotorProvider *)customRotorProvider;
-(id)accessibilityCustomRotors;
-(void)setCustomRotorProvider:(SXAXCustomRotorProvider *)arg1 ;
-(void)setScrollViewDelegate:(id<SXScrollViewDelegate>)arg1 ;
-(BOOL)_accessibilityScrollingEnabled;
-(BOOL)isBouncing;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg1 ;
@end

