/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityCustomRotors;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_accessibilityScrollingEnabled;
-(id<SXScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<SXScrollViewDelegate>)arg1 ;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg1 ;
-(BOOL)isBouncing;
-(SXAXCustomRotorProvider *)customRotorProvider;
-(void)setCustomRotorProvider:(SXAXCustomRotorProvider *)arg1 ;
@end

