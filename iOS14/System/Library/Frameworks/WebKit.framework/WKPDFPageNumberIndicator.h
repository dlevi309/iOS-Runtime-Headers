/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface WKPDFPageNumberIndicator : UIView {

	RetainPtr<UILabel>* _label;
	RetainPtr<_UIBackdropView>* _backdropView;
	RetainPtr<NSTimer>* _timer;
	BOOL _hasValidPageCountAndCurrentPage;
	unsigned _currentPageNumber;
	unsigned _pageCount;

}

@property (assign,nonatomic) unsigned currentPageNumber;              //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                      //@synthesize pageCount=_pageCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabel;
-(unsigned)pageCount;
-(void)show;
-(void)hide:(id)arg1 ;
-(void)_makeRoundedCorners;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)hide;
-(unsigned)currentPageNumber;
-(void)setCurrentPageNumber:(unsigned)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPageCount:(unsigned)arg1 ;
-(void)dealloc;
@end

